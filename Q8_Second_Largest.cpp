#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    if(n<2){
        cout<<"No second largest element"<<endl;
        return 0;
    }
    int first=arr[0],second=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second&&arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==first){
        cout<<"No second largest element"<<endl;
    }else{
        cout<<"Second largest element is: "<<second<<endl;
    }
    return 0;
}
