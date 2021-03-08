#include <iostream>
using namespace std;

int main(){
    // int length,A[4];
    // length=sizeof(A)/sizeof(int);
    // // for (int i=0; i<length; i++){
    // //     cout<<A[i]<<" Garbage Values"<<endl;
    // // }

    // for(int i=0; i<length; i++){
    //     A[i]=i;
    //     cout<<A[i]<<endl;
    // }

    // //adding all the elements of array

    // int sum=0;
    // for(int i=0; i<length; i++){
    //     sum+=A[i];
    //     cout<<"Sum start"<<endl;
    //     cout<<sum<<endl;
    // }
    // cout<<"Sum of elements of array="<<sum<<endl;

    //Finding max element in an array
    // int max,length;
    // int A[]={32,12,43,22,56,-221,86};
    // length = sizeof(A)/sizeof(int);
    // for(int i=0; i<length; i++){
        
    //     if(A[i+1]>=A[i]){
    //         max=A[i+1];
    //     }else{
    //         continue;
    //     }
    // }
    // cout<<"Max is = "<<max;

    //Linear Search

    // int n;
    // cout<<"Enter element you want to find";
    // cin>>n;
    // for (int i =0; i<length; i++){
    //     if(n==A[i]){
    //         cout<<"Found it at position "<<i<<endl;
    //         break;
    //     }else{
    //         if(i==(length-1)){
    //             cout<<"element not found"<<endl;
    //         }else{
    //             continue;
    //         }
        // }
    // }

    //Binary Search

    int n,length,mid,low,high;
    int A[]={1,5,89,234,1244,9909,29736,154316};
    length = sizeof(A)/sizeof(int);
    low=0,high=length-1;
    cout<<"Low = "<<low<< " high is="<<high<<endl;
    cout<<"Enter the number you want to find="<<flush;
    cin>>n;
    
    for(int i =0; i<length; i++){
        mid=(low+high)/2;
        cout<<"mid is="<<mid<<endl;
        if(A[mid]<n){
            low=mid+1;
        }else if(A[mid]>n){
            high=mid+1;
        }else if(A[mid]==n){
            cout<<"The number is at "<<mid<<endl;
            break;
        }else{
            cout<<"Number not found!"<<endl;
            break;
        }
    }
}