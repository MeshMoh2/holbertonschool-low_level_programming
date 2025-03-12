#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's attributes
 * @name: Dog's name (string)
 * @age: Dog's age (float)
 * @owner: Dog's owner (string)
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_H */
