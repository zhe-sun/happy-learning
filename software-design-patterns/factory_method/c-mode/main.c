#include <stdio.h>
#include <stdlib.h>
#include "factory.h"

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Need to add the Product.\n");
		return -1;
	}

	factory factory_a;
	factory factory_b;

	product *product_a; 
	product *product_b; 
	
	factory_a.create_product = create_product_a;
	factory_b.create_product = create_product_b;

	switch (*argv[1])
	{
		case 'A':
			product_a = factory_a.create_product();
			product_a->create = &create_a;
			product_a->create();

			free(product_a);
			break;
		case 'B':
			product_b = factory_b.create_product();
			product_b->create = &create_b;
			product_b->create();
			
			free(product_b);
			break;
		default:
			break;
	}

	return 0;
}


