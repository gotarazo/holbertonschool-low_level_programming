#include "dog.h"

/**
* init_dog- Initialize a variable of type struct dog
* @d: Pointer to struct dog
* @name: Name of the struc dog
* @age:  Age  of the struct dog
* @owner: Name of owner of the struct dog
* Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
