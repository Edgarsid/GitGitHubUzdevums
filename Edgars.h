#include <iostream>
#include "Name.h"
using namespace std;

class Edgars: public Name
{
	public:
		Edgars(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
