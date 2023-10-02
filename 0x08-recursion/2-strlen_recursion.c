#include "main.h"
/**
<<<<<<< HEAD
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
=======
 *  * _strlen_recursion - Returns the length of a string.
 *   * @s: The string to be measured.
 *    *
 *     * Return: The length of the string.
 *      */
int _strlen_recursion(char *s)
{
		int longit = 0;

			if (*s)
					{
								longit++;
										longit += _strlen_recursion(s + 1);
											}

				return (longit);
>>>>>>> 2838ba0df9ad52d604ae71b2ff354087a589364c
}

