#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "Good";

    string upperStr = str;
    string lowerStr = str;
    string reverseStr = str;

    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    reverse(reverseStr.begin(), reverseStr.end());

    cout << upperStr << endl;
    cout << lowerStr << endl;
    cout << reverseStr << endl;

    return 0;
}

