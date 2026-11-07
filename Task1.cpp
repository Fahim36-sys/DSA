#include<iostream>
using namespace std;
int main(){
    int odd=0,even=0;
    string name="Fahim";
   int arr[5]={12,11,3,17,20};
    for(int i=0;i<5;i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Odds: "<<odd<<endl;
    cout<<"Evens: "<<even<<endl;
    cout<<"Name: "<<name<<endl;
}