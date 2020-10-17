#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person{
	public:
		Person();
		Person(string name, int age);
		string toString();
	private:
		string name;
		int age;
};

#endif
