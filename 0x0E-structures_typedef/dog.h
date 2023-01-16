#ifndef DOG_H
#define DOG_H

/**
 * Main - check the code
 * File: dog.h
 * Auth: Brennan D Baraban
 * Desc: Header filr tat defines a new type struct dog.
 */

/**
 * struct dog - struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
