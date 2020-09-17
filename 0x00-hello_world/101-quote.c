#include<stdio.h>
#include<unistd.h>

/**
* main - Print a text
* Return: 1
* Description: Program that print a text and compíle using -wall gcc
**/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
