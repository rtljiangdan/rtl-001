#ifndef ANIMAL_H
#define ANIMAL_H
#include "lw_include.h"

#define ANIMAL(_object_)	((animal*)(_object_))

typedef struct _animal animal;
typedef struct _animal_klass_info animal_klass_info;

extern animal_klass_info* animal_klass;

struct _animal
{
/*klass info*/
	animal_klass_info* klass;

/*private data*/
	char name[256];
	int weight;
};

struct _animal_klass_info
{
	animal_klass_info* super; /*animal's super's klass info*/
	char* name;		/*animal klass's name*/		
	size_t size;	/*animal's size*/
	animal* (*ctor)(animal* self); /*constructor*/
	animal* (*dtor)(animal* self); /*destructor*/
};

char* animal_get_name(animal* self);
void animal_set_name(animal* self, char* name);
int animal_get_weight(animal* self);
void animal_set_weight(animal* self, int weight);

#endif
