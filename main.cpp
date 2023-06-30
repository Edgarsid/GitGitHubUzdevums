#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Edgars.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	Edgars e;
	
	a.setName("Andrejs");
	e.setName("Edgars");
	
	Names[0] = &a;
	Names[1] = &e;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
