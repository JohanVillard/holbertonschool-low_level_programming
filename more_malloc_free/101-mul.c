#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - multiply two numbers
* @argc: count arguments
* @argv: store arguments in string
*
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i, j, elem_of_argv_i, len1, len2;	/* Déclarations de variables */
	int tmp;
	int *num1, *num2, *ans;

	if (argc == 3) /* Cmd + num1 + num2 */
	{
		for (i = 1; i < argc; i++) /* Pointe chacun de nums */
		{
			for (elem_of_argv_i = 0; argv[i][elem_of_argv_i] != '\0'; elem_of_argv_i++) /* Passe sur chaque elem du tab */
			{
				if ((argv[i][elem_of_argv_i] > 47) || (argv[i][elem_of_argv_i] < 58)) /* Si c'est un chiffre */
				{
					if (i == 1)	/* Compte num1 */
						len1++;

					else if (i == 2)	/* Compte num1 */
						len2++;
				}
				else
				{
					printf("Error\n");	/* Si autre que chiffre */
					return (1);
				}
			}
		}
	}
	num1 = malloc(len1 * sizeof(int));	/* Alloue la mémoire de num1 et check */
	num2 = malloc(len2 * sizeof(int));	/* Alloue la mémoire de num2 et check */
	ans = malloc((len1 + len2) * sizeof(int));	/* Alloue la mémoire de num 1 et check */

	for (i = len1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = argv[1][i] - '0';

	for (i = len2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = argv[2][i] - '0';

	for (i = 0; i < len2; i++)
    {
        for(j = 0; j < len1; j++)	/* Je ne comprends pas cette mulltiplication */
        {
            ans[i + j] += b[i] * a[j];
        }
    }

	for (i = 0; i < len1 + len2; i++)
    {
        tmp = ans[i] / 10;			/* Je ne comprends pas cette mulltiplication */
        ans[i] = ans[i] % 10;
        ans[i + 1] = ans[i + 1] + tmp;
    }
    for (i = len1 + len2; i>= 0; i--)	/* met i devant le premier chiffre du produit */
    {
        if (ans[i] > 0)
            break;
    }
    printf("Product : ");
    for (;i >= 0; i--)	/* Remet le produit dans le bon sens*/
    {
        printf("%d",ans[i]);
    }
	putchar('\n');

	free(a);
	free(b);
	free(ans);

	return (0);
}








