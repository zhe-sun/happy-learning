#include <stdlib.h>
#include "factory.h"

struct product *create_product_a()
{
	product *product_a = 
					(struct product *)malloc(sizeof(struct product));
	return product_a;
}

struct product *create_product_b()
{
	product *product_b = 
					(struct product *)malloc(sizeof(struct product));
	return product_b;
}

