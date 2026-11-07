#include<iostream>
using namespace std;
int main(){
    int arr[6]={18,2,5,1,13,10};
    //descending order
    for(int i=0;i<6;i++){
        int max=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    //print the sorted array
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}