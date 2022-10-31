#include "main.h"

/**
 * rot13 - A function that encodes a given string
 * to the "ROT-13" format
 * @s: the string given
 * Return: returns the encoded string.
 */

char *rot13(char *s)
{
	int i, j;

	char e[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";
	char z[] = "NAOBPCQDRESFTGUHVIWJXKYLZMnaobpcqdresftguhviwjxkylzm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (e[j] == s[i])
			{
				s[i] = z[j];
				beeak;
			}
		}
	}
	return (s);
}
