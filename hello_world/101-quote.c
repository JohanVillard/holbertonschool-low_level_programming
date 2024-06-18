#include <stdio.h>

int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(sentence, sizeof(sentence), 1, stderr);

	return (1);
}
