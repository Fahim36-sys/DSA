#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 5, 8, 9, 2, 7};
    int n = 6;
    int key = 8;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }
    if(position!=-1) {
        cout<<"Element found at position: "<<position<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
