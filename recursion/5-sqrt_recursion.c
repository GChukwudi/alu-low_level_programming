#include "main.h"


/**
 * check - checks for the square root of a number
 * @n: number to check
 * @i: number to find the square root of
 * 
 * Return: the square root of i
 */
int check(int n, int i);
{
    if (n * n == i)
    {
        return (n);
    }
    if (n * n > i)
    {
        return (-1);
    }
    return (check(n + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n == 0)
    {
        return (0);
    }
    return (check(1, n));
}
