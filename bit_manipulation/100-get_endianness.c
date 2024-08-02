#include "main.h"

/**
 * get_endianness -  checks the endianness.
 *
 * Return: Always nothing
 */
int get_endianness(void)
{
	int x = 1;	/* 4 bytes --> 00 00 00 01 in hex */

	/* Create a int pointer pointing at x */
	/* Cast this pointer in char to access the bytes level */
	/* Compare to 1 */
	/* If the system uses little endian */
	/* He store x like that : 01 00 00 00 */
	/* 4 addresses / 1 adresse by byte */
	if ((*(char *)&x & 1) == 1)
		return (1);	/* Little endian --> 01 00 00 00 */

	return (0);	/* Big endian --> 00 00 00 01 */
}
