#include <iostream>
using namespace std;

void insertAt(int A[], int &n, int capacity, int pos, int value)
{
    if (n == capacity)
    {
        cout << "Array is full.\n";
        return;
    }

    if (pos < 0 || pos > n)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = n; i > pos; i--)
    {
        A[i] = A[i - 1];
    }

    A[pos] = value;
    n++;
}

void deleteAt(int A[], int &n, int pos)
{
    if (n == 0)
    {
        cout << "Array is empty.\n";
        return;
    }

    if (pos < 0 || pos >= n)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }

    n--;
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << endl;   
}

int main()
{
    int A[10] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Original Array: ";
    display(A, n);

    insertAt(A, n, 10, 2, 25);

    cout << "After Insertion: ";
    display(A, n);

    deleteAt(A, n, 3);

    cout << "After Deletion: ";
    display(A, n);

    return 0;
}