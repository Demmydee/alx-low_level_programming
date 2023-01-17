#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a structure for a dog object
 * @name: is the name element
 * @age: is the age element
 * @owner: is the owner element
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef fpr struct dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
