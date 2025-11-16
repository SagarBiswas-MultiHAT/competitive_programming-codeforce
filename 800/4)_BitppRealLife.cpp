#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cin >> n;

    int value = 0;

    for (int i = 0; i < n; i++) {

        string myVar;
        cin >> myVar;

        // Strings in C++ are 0-indexed, so the last character is at length - 1.
        // int length = myVar.size() - 1;
        // This works correctly for strings of length 2 or more, but if the string is shorter (which shouldn’t happen in your context), it could crash.

        int length = myVar.size();

        if (myVar[0] == '+' && myVar[1] == '+') {
            ++value;
        }

        else if (myVar[0] == '-' && myVar[1] == '-') {
            --value;
        }

        else if (myVar[length - 1] == '+' && myVar[length - 2] == '+') {
            value++;
        }

        else if (myVar[length - 1] == '-' && myVar[length - 2] == '-') {
            value--;
        }
    }

    cout << value << endl;

    return 0;
}
