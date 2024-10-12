#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to find the length of
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome_helper(char *s, int i, int j)
{
    if (i >= j)
        return (1);
    if (s[i] != s[j])
        return (0);
    return (is_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    return (is_palindrome_helper(s, 0, len - 1));
}
