#include <iostream>
using namespace std;

int search(int k, int l, int A[]){
    for(int i =0; i<l; i++){
        if(A[i]==k){
            return i;
            break;
        }
        else{
            continue;
        }
    }
    cout<<"Not found"<<endl;
    return -1;
}

int main(){
    int A[] = {12,341,2,512,1,23,4,234,2};
    int key;
    int length = sizeof(A)/sizeof(int);
    cout<<"Enter the element to be searched = "<<flush;
    cin>>key;

    cout<<"Element found at = "<<search(key,length,A);

}