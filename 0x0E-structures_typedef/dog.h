/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: integer
 * @owner: character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
