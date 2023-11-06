#ifndef DOG_H
#define DOG_H
/**
 * struct dog -it  defines a new type struct dog.
 * @name:itbis the name of dog.
 * @age:it is the  age of dog..
 * @owner:it is the  owner of  the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
