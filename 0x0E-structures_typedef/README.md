# C - Structures, Typedef #

In C language struct is a great way to group several related variables of different data type all at one place. typdef is yet another way used for declaring the type of structure in C language.

# Introduction to typedef #

typedef is a keyword that gives a new name to an existing data type.

For example, you can give a new name to an existing data type unsigned int type and program using uint in its place. At this time, uint will also be treated exactly as unsigned int.


#include <stdio.h>

typedef struct {   
    char name[20];
    char sex; 
    int age; 
} person_t;

main()
{
    person_t p = {"Tom", 'M', 19};
    printf("%s %c %d\n", p.name, p.sex, p.age);
    return 0;
}
}

Output :

Tom M 19

0. Poppy Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *

A dog is the only thing on earth that loves you more than you love yourself Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

A dog will teach you unconditional love. If you can have that in your life, things won't be too bad Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);

Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read Define a new type dog_t as a new name for the type struct dog.

A door is what a dog is perpetually on the wrong side of Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);

You have to store a copy of name and owner
Return NULL if the function fails
How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);

