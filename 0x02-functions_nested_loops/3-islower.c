#include "holberton.h"

/**
* _islower -function that checks for lowercase character
* @c: Character checked
* Return: 1 o 0
*/


int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
