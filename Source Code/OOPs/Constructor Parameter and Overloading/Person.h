#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person{
	public:
		Person();
		Person(string name,int age, int id);
		string toString();
		void user(string hobby);
	private:
		string name, hobby;
		int age, id;
};

#endif
