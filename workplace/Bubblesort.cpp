//bubblesort.cpp
#include<iostream>
using namespace std;
int main(){
    int n=6; // Number of elements in the array
    int arr[5] = {60, 30, 40, 70, 10};
// Bubble Sort Algorithm
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                // Swap arr[j] and arr[j + 1]
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}