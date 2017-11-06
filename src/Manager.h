/*
 * Manager.h
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Employee.h"

class Manager: public Employee {
public:
	Manager(std::string theName, float thePayRate,int bonusMult);
	virtual ~Manager();
	float pay(float hoursWorked) const;
protected:
	int bonusMult;
};

#endif /* MANAGER_H_ */
