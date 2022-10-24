#include "lists.h"

/**
 * printBefore_main - prints something before executing main
 *
 * Return: nothing.
 */
void __attribute__((constructor)) printBefore_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
