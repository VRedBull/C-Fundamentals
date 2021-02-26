#include <iostream>
using namespace std;

int main(){

//Table

    // int n;
    // cout<<"Enter table number = "<<flush;
    // cin>>n;
    // for (int i=1;i<=10;i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }
    // return 0;


//Adding first n numbers

    // int x=0,y;
    
    // cout<<"Enter how many natural numbers you want to add = ";
    // cin>>y;
    // for (int i=1; i<=y;i++){
    //     x+=i;
    //     cout<<x<<endl;
    // }
    // cout<<"Sum is="<<x;

//Factorial

    
    // int x=1,y;
    
    // cout<<"Factorial no. = ";
    // cin>>y;
    // for (int i=1; i<=y;i++){
    //     x*=i;
    //     cout<<x<<endl;
    // }
    // cout<<"Factorial is="<<x;

//Factor of a number

    // int sum=0, y;
    
    // cout<<"Number to be factored = ";
    // cin>>y;
    
    // for (int i =1; i<=y;i++){
    //     if(y%i==0){
    //         sum+=i;
    //         cout<<i<<endl;
    //     }
    // }
    // cout<<"sum is="<<sum<<endl;

    // if(y*2==sum){
    //     cout<<"Perfect number"<<endl;
    // }else{
    //     cout<<"Not a perfect number"<<endl;
    // }

//Prime number

// int n,flag=0;
// cout<<"Enter a number";
// cin>>n;

// for(int i =2; i<n;i++){
//     if(n%i==0){
//         flag=-1;
//         break; 
//     }else{
//         continue;
//     }
// }

// if(flag==-1){
//     cout<<"Not a prime number"<<endl;
// }else{
//     cout<<"Prime number"<<endl;
// }

//Displaying the digits of a number and checking for armstrong

// int n,r,a=0;
// cout<<"Enter a number";
// cin>>n;
//     while(n>0){
//         r=n%10;
//         n/=10;
//         cout<<r;
//         a=a+(r*r*r);
//     }
//     if(a==n){
//         cout<<"a armstrong number"<<endl;

//     }else {
//         cout<<"Not a armstrong number."<<endl;
//     }


//Storing a reverse of a number


// int n,r,a=0;
// cout<<"Enter a number";
// cin>>n;
//     while(n>0){
//         r=n%10;
//         n/=10;
//         a=a*10+r;
//     }
//     cout<<a;

//Greatest common factor of two numbers

int m,n;
m=9,n=3;


while(m!=n){
    if(m>n){
        m=m-n;
    }else{
        n=n-m;
    }
}

cout<<m<<" is the Greatest common factor of two numbers "<<n;






}