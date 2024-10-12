#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * 
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int i = 0;
    int j = _strlen_recursion(s) - 1;

    return (check(s, i, j));
}
