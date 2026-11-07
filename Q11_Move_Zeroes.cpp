#include <iostream>
using namespace std;

int main() {
    int arr[6] = {0, 2, 0, 3, 0, 4};
    int n = 6;
    int temp[6];
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = index; i < n; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    cout << "After moving zeroes to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
