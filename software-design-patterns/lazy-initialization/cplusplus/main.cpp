#include "Daily.h"

int main(){

	//Initialize less-expensive process here...
	//Expensive process initialized when first-time used.
	CDaily::GetFavor("BOOK");  //Initialize new instance as needed.
	CDaily::PrintFavorProfile();
	
	CDaily::GetFavor("APPLE"); //Initialize new instance as needed.
	CDaily::PrintFavorProfile();

	CDaily::GetFavor("BOOK");  //Initialize new instance as needed.
	CDaily::PrintFavorProfile();
	return 0;
}
