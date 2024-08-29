#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    int n;
    cout << "Enter the number of Celsius values: ";
    cin >> n;

    float *celsiusArr = new float[n];
    cout << "Enter the Celsius values: ";
    for (int i = 0; i < n; i++) {
        cin >> celsiusArr[i];
    }

    cout << "Fahrenheit values: ";
    for (int i = 0; i < n; i++) {
        cout << celsiusToFahrenheit(celsiusArr[i]) << " ";
    }
    cout << endl;

    delete[] celsiusArr;
    return 0;
}

