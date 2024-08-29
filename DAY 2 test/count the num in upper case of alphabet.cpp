#include <iostream>
#include <cctype>
using namespace std;

int countUppercase(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "C++ is a Programming Language";
    cout << "Number of uppercase letters: " << countUppercase(str) << endl;
    return 0;
}

