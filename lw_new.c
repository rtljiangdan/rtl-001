#include "lw_new.h"

animal* lw_new(animal_klass_info* klass)
{
	LW_ASSERT(klass);
	animal* p = ANIMAL(malloc(klass->size));
	LW_ASSERT(p);
	p->klass = klass;
	return klass->ctor(p);
}

void lw_delete(animal* self)
{
	if(self)
	{
		free(self->klass->dtor(self));
	}
}