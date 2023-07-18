#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that defines a dog
 * @name: a pointer, representing the name of a dog
 * @age: representing the age of the dog
 * @owner: a pointer, representing the name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* define new type dog_t as new name for type struct dog */
typedef struct dog dog_t;

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
