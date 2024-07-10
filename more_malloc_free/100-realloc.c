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
	unsigned char *byte_ptr; /* Ponteur d'init*/
	void *new_ptr, *tmp;  /* Nouveau pointeur et temporaire */

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
	{
		return (NULL);
	}
	if (new_size > old_size) /* La mémoire ajoutée n'est pas init */
	{	/* Pas d'opé arithmé ou de déférence pour les ptr de type void */
		for (i = 0; i < old_size; i++) /* Utilis de memcopy à cause du type void* */
		{
			tmp = ptr; /* ancien dans temporaire */
			new_ptr = tmp;  /* temporaire dans new_tmp */
		}
	}
	else /* Initialisation à 0 */
	{
		byte_ptr = (unsigned char *)ptr;
		for (i = 0; i < new_size; i++)
		{   /* Forcé de cast, pas d'opé arithmé ou de déféren pour void* */
			byte_ptr = (unsigned char *)new_ptr; /* Convertit en char(1 bytes) */
			byte_ptr[i] = 0; /* Toutes les byte sont initialisé à 0*/
		}
	}
	free(ptr); /* Libération de la mémoire de l'ancien tableau */
	return (new_ptr);
}

