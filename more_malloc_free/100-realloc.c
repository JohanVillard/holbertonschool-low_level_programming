#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - free and malloc memory
 * @ptr: to delete
 * @old_size: to free
 * @new_size: to reallocate
 * Return: (void*)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i; /* Compteur */
	char *new_ptr;	/* Nouveau pointeur et temporaire */

	if (ptr == NULL)    /* Si ptr NULL, free non nécéssaire */
	{	return (malloc(new_size));	}
	if (new_size == old_size) /* Ne fait rien */
	{
		return (ptr); /* Renvoie le ptr d'origine */
	}
	if (new_size == 0 && ptr != NULL) /* La mémoire demandée est égale à 0 */
	{
		free(ptr);  /* Efface le block mémoire associé à ptr */
		return (NULL);
	}
	new_ptr = malloc(new_size); /* Alloue la mémoire demandée */
	if (new_ptr == NULL) /* Check allocation */
	{	return (NULL);	}
	if (new_size > old_size) /* La mémoire ajoutée n'est pas init */
	{	/* Pas d'opé arithmé ou de déférence pour les ptr de type void */
		for (i = 0; i < old_size; i++) /* Copie dans le nouveau bloc */
		{	/* Forcé de cast, pas d'opé arithmé ou de déféren pour void* */
			new_ptr[i] = ((unsigned char *)ptr)[i]; /* Convertit en char(1 bytes) */
		}
	}
	else /* Initialisation à 0 */
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = ((unsigned char *)ptr)[i]; /* Convertit en char(1 bytes) */
			if (new_ptr == NULL)
			{
				free(new_ptr);
				new_ptr = NULL;
				return (ptr);
			}
		}
	}
	free(ptr); /* Libération de la mémoire de l'ancien tableau */
	return (new_ptr);
}
