#include "main.h"

/**
<<<<<<< HEAD
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
=======
 *  * factorial - returns the factorial of a number
 *   * @n: number to return the factorial from
 *    *
 *     * Return: factorial of n
 *      */
int factorial(int n)
{
		if (n < 0)
					return (-1);
			if (n == 0)
						return (1);
				return (n * factorial(n - 1));
>>>>>>> 2838ba0df9ad52d604ae71b2ff354087a589364c
}

