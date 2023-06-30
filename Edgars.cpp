#include <iostream>
#include "Name.h"
#include "Edgars.h"

using namespace std;

Edgars::Edgars(string n)
{
	name=n;
}

void Edgars::setName(string n)
{
	name=n;
}

void Edgars::Print() const
{
	cout << name << endl;
}

