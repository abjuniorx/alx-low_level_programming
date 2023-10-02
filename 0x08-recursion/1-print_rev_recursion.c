#include "main.h"
/**
<<<<<<< HEAD
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

=======
 *  * _print_rev_recursion - Prints a string in reverse.
 *   * @s: The string to be printed.
 *    */
void _print_rev_recursion(char *s)
{
		if (*s)
				{
							_print_rev_recursion(s + 1);
									_putchar(*s);
										}
}


>>>>>>> 2838ba0df9ad52d604ae71b2ff354087a589364c
