#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-45, 78, 23, 89, -90};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    cout << "Array in non-decreasing order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

