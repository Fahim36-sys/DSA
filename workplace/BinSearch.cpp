#include<iostream>
using namespace std;
int main(){
    int arr[15]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    int target,left=0,right=14,mid=(left+right)/2;
    cout<<"Enter the element to search: ";
    cin>>target;
    for(int i=0;i<15;i++){
        if(arr[mid]==target){
            cout<<"Element found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        mid=(left+right)/2;
    }   
}