//============================================================================
// Name        : 10_Inheritance_Virtual.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"
#include "Manager.h"
using namespace std;

int main() {
	
	Employee e1(string("keith"),20);
	cout<<"employee 1 pay:"<<e1.pay(27)<<endl;
	
	Manager m1(string("brian"),20,2);
	cout<<"Manager 1 pay:"<<m1.pay(27)<<endl;
	
	Employee *pe = new Manager(string("brian"),20,2);
	cout<<"Manager 1 pay using Employee pointer:"<<pe->pay(27)<<endl;
	
	if (pe)
		delete pe;
}
