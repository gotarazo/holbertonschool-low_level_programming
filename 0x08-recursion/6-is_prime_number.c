#include "holberton.h"

/**
* prime- Check prime numbers
* @n: num
* @m: Multiple
* Return: If prime number
*/

int prime(int n, int m)
{
if ((n % m == 0 && m < n) || n < 2)
return (0);

else if (n % m == 0 && m == n)
return (1);

else
return (prime(n, m + 1));
}

/**
* is_prime_number- returns 1 if input integer is prime, otherwise return 0
* @n: Number
* Return: prime of n
*/

int is_prime_number(int n)
{
return (prime(n, 2));
}
