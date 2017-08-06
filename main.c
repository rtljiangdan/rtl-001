#include "animal.h"
#include "lw_new.h"

int main(int argc, char* argv)
{
	argc;
	argv;

	animal* animal1 = NULL;
	animal* animal2 = NULL;
	
	animal1 = lw_new(animal_klass);
	animal_set_name(animal1, "Kitty");
	animal_set_weight(animal1, 30);
	printf("animal1, name : %s, weight : %d\n",
	animal_get_name(animal1),
	animal_get_weight(animal1));
	lw_delete(animal1);

	animal2 = lw_new(animal_klass);
	animal_set_name(animal2, "Bib");
	animal_set_weight(animal2, 10);
	printf("animal2, name : %s, weight : %d\n",
	animal_get_name(animal2),
	animal_get_weight(animal2));
	lw_delete(animal2);
	return 0;
}
