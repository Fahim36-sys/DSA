#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, 2, 1, 2, 3, 2, 2};
    int n = 7;
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            frequency++;
        }
    }

    if (frequency > n / 2) {
        cout << "Majority element is: " << candidate << endl;
    } else {
        cout << "No majority element" << endl;
    }

    return 0;
}
