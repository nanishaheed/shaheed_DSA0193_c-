#include <iostream>
using namespace std;

int sumToN(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << sumToN(n) << endl;
    return 0;
}

