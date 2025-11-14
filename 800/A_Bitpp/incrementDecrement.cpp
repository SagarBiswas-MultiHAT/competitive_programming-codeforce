#include<iostream>
using namespace std;

int main() {

    int n = 0;

    /*
        prefix increment    : Increment happens on the same line, immediately.
        postfix increment   : Increment does happen in the same line, but after the current use of n in that expression.
    */

    cout << "PreIncrement Value\t: " << ++n << endl;    // 1
    cout << "PostIncrement Value\t: " << n++ << endl;   // 1
    cout << "PreDecrement Value\t: " << --n << endl;    // 1
    cout << "PostDecrement Value\t: " << n-- << "\n\n"; // 1

    cout << "PreIncrement" << endl;
    n = 5;
    int a = ++n; // n becomes 6 first, then a = 6
    cout << "a's value is: " << a << "\n";      // 6
    cout << "n's value is: " << n << "\n\n";    // 6

    cout << "PostIncrement" << endl;
    n = 5;
    a = n++; // a = 5, then n becomes 6
    cout << "a's value is: " << a << "\n";      // 5
    cout << "n's value is: " << n << "\n\n";    // 6

    cout << "PostIncrement Loop" << endl;
    n = 0;
    while (n++ < 3) {
        cout << n << " "; // 1, 2, 3
    }
    cout << endl;

    cout << "PreIncrement Loop" << endl;
    n = 0;
    while (++n < 3) {
        cout << n << " "; // 1, 2
    }
    cout << endl;

    return 0;
}
