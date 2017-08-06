#include "animal.h"

animal* animal_ctor(animal* self);
animal* animal_dtor(animal* self);

static animal_klass_info local_animal_klass = 
{
	NULL,
	"animal_klass",
	sizeof(animal),
	animal_ctor,
	animal_dtor,
};
animal_klass_info* animal_klass = &local_animal_klass;

animal* animal_ctor(animal* self)
{
	memset(self->name, 0x00, sizeof(self->name));
	self->weight = 0;
	return self;
}

animal* animal_dtor(animal* self)
{
	return self;
}

char* animal_get_name(animal* self)
{
	return self->name;
}

void animal_set_name(animal* self, char* name)
{
	strncpy(self->name, name, sizeof(self->name));
}

int animal_get_weight(animal* self)
{
	return self->weight;
}

void animal_set_weight(animal* self, int weight)
{
	self->weight = weight;
}
