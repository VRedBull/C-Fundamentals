#include <iostream>
#include <sstream>	//including the string stream
using namespace std;



int main(){
	 string name = "Vivaan";	
	 int age = 19;
	 
	 //Here we are trying to print some name and a no. in a line in a string
	 //like "My name is xyz and age 12"...here everything else is a string except for 12
	 //so to 
	 
	 stringstream ss;	//Object of stringstream
	 
	 
	 
	 ss<<"Name is: "<<name<<"; Age is: "<<age;
	 
	 string info = ss.str();	//everthing in ss object to string
	 cout<<info<<endl;
	 
	 
	 
	 //Another try______________________________________________________________________
	 
	 int items = 23;
	 string material = "Leather";
	 
	 stringstream ss1;
	 
	 ss1<<"No. of items is : "<<items<<" and material is: "<<material;
	 string info1 = ss1.str();
	 
	 cout<<info1<<endl;
	 	 
	 return 0; 
}
