#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a dog
 * @name: his name
 * @age: his age
 * @owner: his owner
 *
 * Description: attribute data to a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
