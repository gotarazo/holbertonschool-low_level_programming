#include "dog.h"

/**
* new_dog- Creates a new dog
* @name: Name of new dog
* @age: Age of new dog
* @owner: Owner's name
* Return: New or NULL (if fails)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int w = 0, x = 0, y, z;
dog_t *new;

new = malloc(sizeof(dog_t));

if (name != NULL && owner != NULL && new != NULL)
{
while (name[w] != 0)
w++;
while (owner[x] != 0)
x++;

new->name = malloc((w + 1) * sizeof(char));
new->owner = malloc((x + 1) * sizeof(char));

if (new->name == NULL || new->owner == NULL)
{
free(new->name);
free(new->owner);
free(new);
return (NULL);
}
for (y = 0; y < w; y++)
new->name[y] = name[y];
new->name[y] = 0;
new->age = age;
for (z = 0; z < x; z++)
new->owner[z] = owner[z];
new->owner[z] = 0;
return (new);
}
return (NULL);
}
