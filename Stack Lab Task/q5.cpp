#include<iostream>
using namespace std;
bool isEmpty(int top){
    return top==-1;
}
bool isFull(int top, int capacity){
    return top==capacity-1;
}
void push(int stack[], int &top, int capacity, int value){
    if(isFull(top, capacity)){
        cout<<"Stack Overflow! Cannot push "<<value<<endl;
        return;
    }
    top++;
    stack[top] = value;
    cout<<"Pushed "<<value<<endl;
}
int pop(int stack[], int &top){
    if(isEmpty(top)){
        cout<<"Stack Underflow! Nothing to pop"<<endl;
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}
int peek(int stack[], int top){
    if(isEmpty(top)){
        cout<<"Stack is Empty! Nothing to peek"<<endl;
        return -1;
    }
    return stack[top];
}
int size(int top){
    return top+1;
}
void display(int stack[], int top){
    if(isEmpty(top)){
        cout<<"Stack is Empty"<<endl;
        return;
    }
    for(int y=top; y>=0; y--){
        cout<<"Index:["<<y<<"] Value "<<stack[y];
        if(y==top){
            cout<<"  <-- top";
        }
        cout<<endl;
    }
}
int main(){
    int stack[5],top=-1,capacity=5;;
    int val[5]={1,2,4,6,7};
    for(int i=0;i<capacity;i++){
        push(stack,top,capacity,val[i]);
    }
    display(stack,top);
    int search_val=4;
    bool found=false;
    for(int i=0;i<capacity;i++){
        if(stack[i]==search_val){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Value "<<search_val<<" found in the stack."<<endl;
    }else{
        cout<<"Value "<<search_val<<" not found in the stack."<<endl;
    }
}