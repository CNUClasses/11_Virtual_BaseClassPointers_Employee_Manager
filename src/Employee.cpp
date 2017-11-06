/*
 * Employee.cpp
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#include "Employee.h"

Employee::Employee(std::string theName, float thePayRate):name(theName),payrate(thePayRate) {
}

Employee::~Employee() {
	
}

std::string Employee::getName()const{
	return name;
}
float Employee::pay(float hoursWorked) const{
	return hoursWorked*payrate;
}
