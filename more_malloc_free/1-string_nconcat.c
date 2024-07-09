#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings for n bytes
 * @s1: first string
 * @s2: second string
 * @n: bytes to concat
 * Return: (ptr)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Déclare un pointeur */
	char *ptr;
	/* Initialise les longueurs de tableaux et compteurs*/
	unsigned int len1 = 0, len2 = 0, n_s2 = 0, i, j;

	/* If s1 or s2  is NULL */
	if (s1 == NULL)
	{	s1 = ""; }
	if (s2 == NULL)
	{	s2 = ""; }

	/* Taille de s1 et s2 sans l'octet de fin*/
	while (s1[len1])
	{	len1++;	}
	while (s2[len2])
	{	len2++;	}
	/* Compare s2 à n */
	if (n >= len2)
	{	/* Longueur tout s2 */
		n_s2 = len2;
	}
	else
	{	/* Longueur n bytes de s2 */
		n_s2 = n;
	}
	/* La string concaténée + l'octet de fin*/
	ptr = malloc(len1 + n_s2 + 1);
	/* Allocation réussie ? */
	if (ptr == NULL)
	{	return (NULL);	}
	/* Incrémente s1 dans la nouvelle string */
	for (i = 0; i < len1; i++)
	{	ptr[i] = s1[i];	}
	/* Incrémente s2 à n bytes dans la nouvelle string */
	for (j = 0; j < n_s2; j++)
	{	ptr[i + j] = s2[j];	}
	/* Termine la string avec l'octect de fin */
	ptr[i + j] =  '\0';
	return (ptr);
}
