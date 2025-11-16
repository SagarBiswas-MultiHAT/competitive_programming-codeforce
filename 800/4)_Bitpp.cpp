#include <iostream>
#include <string> // including the header that defines the class std::string inside the std namespace.
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;

        // Check if the statement contains ++ or --
        if (s.find("++") != string::npos) {
            // :: is the scope resolution operator. it lets you access a name (variable, function, constant) from a specific namespace or class.
            // npos indicates no position, so if it's not npos, it means "++" was found. npos is a static constant inside the std::string class
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}
