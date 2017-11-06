/*
 * Employee.h
 *
 *  Created on: Nov 6, 2017
 *      Author: keith
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>

class Employee {
public:
	Employee(std::string theName, float thePayRate);
	virtual ~Employee();

	std::string getName()const;
	float pay(float hoursWorked) const;
	
protected:
	std::string name;
	float payrate;
};

#endif /* EMPLOYEE_H_ */
