#include <iostream>
//using namespace std;

int main ()
{
  int num1, num2;
  std::cout << "Please enter two integer values: ";
  std::cin >> num1;
  std::cin>> num2;

  //Ternany Operator
  //Condition     (if block)                       (else if block)                          (else block)
  num1==num2 ?  std::cout << num1 << "=" << num2 : num1>num2 ? std::cout<<num1<<">"<<num2 : std::cout<<num1<<"<"<<num2;




  // if(num1==num2){
  // std::cout << num1 << "=" << num2;
  // }
  // else if(num1>num2){
  //   std::cout<<num1<<">"<<num2;
  // }
  // else{
  //   std::cout<<num1<<"<"<<num2;
  // }
  return 0;
}