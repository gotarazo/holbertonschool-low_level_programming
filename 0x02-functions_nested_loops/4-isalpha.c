#include "holberton.h"

/**
* _isalpha -function that checks for a letter lowercase or uppercase
* @c: Character checked
* Return: 1 o 0
*/


int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
