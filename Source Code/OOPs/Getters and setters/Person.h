#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
//#inlcude <string> you can either include this preprocessor statement or not gcc compiler will take it other may not
using namespace std;
class Person{
	private:
		int age;
		string name;
	public:
		void setName();
		string getName();
		void setAge();
		int getAge();
		Person();
		~Person();
};

#endif
