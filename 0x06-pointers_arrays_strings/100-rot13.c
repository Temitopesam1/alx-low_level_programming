#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: parameter
 * Return: 0
 */

<<<<<<< HEAD
char *rot13(char *s)
=======
char *rot13(char *str)
>>>>>>> ab428cb758a0c9a44adde9f07c24f4b8c08cba47
{
		int i, j;

<<<<<<< HEAD
			char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
				char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

					for (i = 0; s[i] != '\0'; i++)
							{
										for (j = 0; a[j] != '\0'; j++)
													{
																	if (s[i] == a[j])
																					{
																										s[i] = b[j];
																														break;
																																	}
																			}
											}
=======
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
>>>>>>> ab428cb758a0c9a44adde9f07c24f4b8c08cba47

						return (s);
}
