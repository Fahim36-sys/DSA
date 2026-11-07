#include <iostream>
using namespace std;
int main(){
    int arr1[4]={1,3,5,7};
    int arr2[3]={2,4,6};
    int n1=4,n2=3;
    int merged[10],i=0,j=0,k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            merged[k]=arr1[i];
            i++;
        }else{
            merged[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        merged[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        merged[k]=arr2[j];
        j++;
        k++;
    }
    cout<<"Merged array: ";
    for(int x=0;x<k;x++){
        cout<<merged[x]<< " ";
    }
    cout<<endl;
    return 0;
}
