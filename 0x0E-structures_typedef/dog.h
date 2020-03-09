#ifndef Dog
#define Dog

/**
 * struct dog - Dogs information
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner's name
 *
 * Description: General information abaout a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
