#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,3,8,2,4};
    int logicalsize=5;
    int position=3;
    //delete the element at the given position
    for(int i=position-1;i<logicalsize-1;i++){
        arr[i]=arr[i+1];
    }
    logicalsize--;
    //print the array after deletion
    for(int i=0;i<logicalsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
