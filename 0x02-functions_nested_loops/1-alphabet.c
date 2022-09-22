#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - print alphabet lowercase
 * Return: Always 0.
 */

 print_alphabet(void)

{
	char alphabet;


	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
	}

	putchar('\n');
}
