#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- Generates random valid passswords for the program 101-crackme
* Return: 0
*/

int main(void)
{
char pass[84];
int point = 0, sum = 0, key1, key2;
srand(time(0));

while (sum < 2772)
{
pass[point] = 33 + rand() % 94;
sum += pass[point++];
}
pass[point] = '\0';

if (sum != 2772)
{
key1 = (sum - 2772) / 2;
key2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
key1++;

for (point = 0; pass[point]; point++)
{
if (pass[point] >= (33 + key1))
{
pass[point] -= key1;
break;
}
}
for (point = 0; pass[point]; point++)
{
if (pass[point] >= (33 + key2))
{
pass[point] -= key2;
break;
}
}
}
printf("%s", pass);
return (0);
}
