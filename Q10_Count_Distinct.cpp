#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, 5, 2, 8, 5, 2, 9};
    int n = 7;
    int distinct[10];
    int frequency[10];
    int count = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < count; j++) {
            if (distinct[j] == arr[i]) {
                frequency[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            distinct[count] = arr[i];
            frequency[count] = 1;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << distinct[i] << " appears " << frequency[i] << " times" << endl;
    }

    return 0;
}
