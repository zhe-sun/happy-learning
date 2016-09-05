#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "product.h"

typedef struct product*(*C_PRODUCT)(void);

typedef struct factory {
	C_PRODUCT create_product;
//	product *(*create_product)();
}factory;

struct product *create_product_a();
struct product *create_product_b();

#endif
