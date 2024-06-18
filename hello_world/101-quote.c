#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Display a sentence in STDERR
 *
 * Return: 1
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, sentence, sizeof(sentence));

	return (1);
}
