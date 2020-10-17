#include<iostream>
#include<iomanip>       //this file is used for outputting scientific 
                        //and other float point digits that helps in precision
using namespace std;

int main(){
    float f1 = 3.02;
    double d1 = 3.02;
    long double ld1 = 123.98798;
    cout<<setprecision(89) << scientific << fixed << f1<< " "<< sizeof(float)<<endl;     //setpricision is used just for outputting 
                                                                    //a how many digits should it output most of the 
                                                                    //other things after 4-5 decimal places are just garbage
    cout<<setprecision(89) << scientific << fixed << d1<< " "<< sizeof(double)<<endl;      //double is much better than using float

    cout<<setprecision(89) << scientific << fixed << d1<< " "<< sizeof(long double)<<endl;      //long double is much more precise than the other two

    return 0;
}

//sizeOf just tells how much memory (in bytes) is taken up.