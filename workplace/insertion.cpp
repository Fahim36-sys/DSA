#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,8,2,4};
    int n=5;
    int key=arr[0];
    //descending order             
    for(int i=1;i<n;i++){          
        key=arr[i];                
        int j=i-1;
        while(j>=0 && arr[j]>key){ // For ascending order, use: while(j>=0 && arr[j]>key)
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
