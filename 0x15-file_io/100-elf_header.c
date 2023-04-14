#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * p_address - prints address
 * @ptr: magic
 * Return: no value
 */
void p_address(char *ptr)
{
	int m;
	int begin;
	char sys;

	printf("  Entry point address:               0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (m = begin; m >= 22; m--)
		{
			if (ptr[m] > 0)
				printf("%x", ptr[m]);
			else if (ptr[m] < 0)
				printf("%x", 256 + ptr[m]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		begin = 26;
		for (m = begin; m > 23; m--)
		{
			if (ptr[m] >= 0)
				printf("%02x", ptr[m]);

			else if (ptr[m] < 0)
				printf("%02x", 256 + ptr[m]);

		}
	}
	printf("\n");
}
/**
 * p_type - prints type
 * @ptr: magic.
 * Return: no return.
 */
void p_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("RELOC (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}
