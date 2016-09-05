#ifndef _PRODUCT_H_
#define _PRODUCT_H_

typedef void(*CREATE)(void);

typedef struct product {
	CREATE create;
}product;

void create_a();
void create_b();

#endif
