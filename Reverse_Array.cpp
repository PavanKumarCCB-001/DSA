#include <iostream>
#include <algorithm>  // for std::swap
using namespace std;

void rev(int i, int arr[], int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    rev(i + 1, arr, n);  }

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int* a = new int[n];  // dynamically allocate array
    cout << "Enter Elements into Array\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    rev(0, a, n);  // reverse using recursion
    cout << "After Reversing the Elements:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    delete[] a;  // free memory
    return 0; }
