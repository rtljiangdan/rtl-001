#ifndef LW_NEW_H
#define LW_NEW_H

#include "lw_include.h"
#include "animal.h"

animal* lw_new(animal_klass_info* klass);
void lw_delete(animal* self);
#endif
