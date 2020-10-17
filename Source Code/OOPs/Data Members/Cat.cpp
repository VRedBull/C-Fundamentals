#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

void Cat::speak(){
	if(happy==true){
	cout<<" "<<"MEOWWW"<<endl;
}
	else{
		cout<<" "<<"SSSsss"<<endl;
	}
}
//void Cat::setName(){
//	cout<<"Enter name :"<<endl;
//	cin<<name;
//}
//
//string Cat::getName(){
//	return name;
//}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}


