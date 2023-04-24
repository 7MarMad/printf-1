#include "main.h"
/**
 * _strlen - count the length of a character
 * @s: the character to be counted
 * Return: the length integer
 */
int _strlen(char *s)
{
        int len = 0;
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                len++;
        }
        return (len);
}
