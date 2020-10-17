#include<iostream>
using namespace std;

int main(){

    int num [] = {34,12,76,12};

    int numLength = sizeof(num)/sizeof(int);    //This is how we determine the length or size of an array
    cout<<"Total 1D array elements:"<<numLength<<endl;
    for (int i = 0; i<numLength; i++){
        cout<<num[i]<<" "<<flush;
    }
    cout<<endl<<"_________________________________"<<endl;

    int num2D[2][3] ={
        {34,12,65},
        {67,23,43}
    } ;
    int num2DLengthT = sizeof(num2D)/sizeof(int);
    int num2DLengthC = sizeof(num2D[0])/sizeof(int);
    int num2DLengthR = num2DLengthT/num2DLengthC;
    
    cout<<"Total 2D array elements :"<<num2DLengthT<<endl;
    cout<<"Total columns:"<<num2DLengthC<<endl;
    cout<<"Total rows:"<<num2DLengthR<<endl;

    for(int i =0; i<num2DLengthR; i++){
        for (int j=0; j<num2DLengthC; j++){
            cout<<num2D[i][j]<<" "<<flush;
        }
        cout<<endl;
    }

    

    cout<<endl<<"_________________________________"<<endl;

    //This simpler way for multidimensional array representation

    string animals[][3] = {
        {"Birds", "Zebra", "Lion"},
        {"Elephant", "Cow", "Dog"}
    };

    cout<<sizeof(animals[0])<<endl;    //each string is of 24 bytes...so for 6 string elements 24*6=144
    for (int i = 0; i<sizeof(animals)/sizeof(animals[0]) ;i++){         //sizeof(animals[0]) gives the bytes of 1st row of the array which is same for every row ... so total bytes divided by bytes used by each row will give total number of rows
        for(int j =0; j<sizeof(animals[0])/sizeof(string) ; j++){       //sizeof(animals[0]) ...total number of bytes used by 1st row divided by sizeof(string) i.e. total bytes used by each element...so that it'll give the total no. of elements in the row
            cout<<animals[i][j]<<" "<<flush;
        }
        cout<<endl;
    }


    cout<<endl<<"_________________________________"<<endl;

    //Just practicing the previous bit again
    
    for (int i =0; i<sizeof(num2D)/sizeof(num2D[0]) ; i++){
        for ( int j =0; j<sizeof(num2D[0])/sizeof(int) ; j++){
            cout<<num2D[i][j]<<" "<<flush;
        }
        cout<<endl;
    }
    return 0;
}