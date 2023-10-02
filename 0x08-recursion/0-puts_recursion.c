#include "main.h"
/**
<<<<<<< HEAD
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
=======
 *  * _puts_recursion - function like puts();
 *   * @s: input
 *    * Return: Always 0 (Success)
 *     */
void _puts_recursion(char *s)
{
		if (*s)
				{
							_putchar(*s);
									_puts_recursion(s + 1);
										}

			else
						_putchar('\n');
>>>>>>> 2838ba0df9ad52d604ae71b2ff354087a589364c
}

