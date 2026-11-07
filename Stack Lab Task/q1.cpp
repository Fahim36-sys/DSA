#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> values;
    values.push(7);
    values.push(15);
    values.push(23);
    values.pop();
    stack<int> copy = values;
    while (!copy.empty()) {
        cout << copy.top() << " <-- top" << endl;
        copy.pop();
    }
    return 0;
}
