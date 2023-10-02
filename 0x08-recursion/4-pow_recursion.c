#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
=======
 *  * _pow_recursion - returns the value of x raised to the power of y
 *   * @x: value to raise
 *    * @y: power
 *     *
 *      * Return: result of the power
 *       */
int _pow_recursion(int x, int y)
{
		if (y < 0)
					return (-1);
			if (y == 0)
						return (1);
				return (x * _pow_recursion(x, y - 1));
>>>>>>> 2838ba0df9ad52d604ae71b2ff354087a589364c
}

