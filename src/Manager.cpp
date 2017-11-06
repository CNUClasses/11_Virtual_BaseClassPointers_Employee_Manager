/*
 * Manager.cpp
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#include "Manager.h"

Manager::Manager(std::string theName, float thePayRate,int bonusMult):Employee(theName,thePayRate),bonusMult(bonusMult) {
	// TODO Auto-generated constructor stub

}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

float Manager::pay(float hoursWorked) const{
	return bonusMult*(Employee::pay(hoursWorked));
}

