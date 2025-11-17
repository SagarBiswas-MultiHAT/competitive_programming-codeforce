#include<iostream>
using namespace std;

int main() {

    int M, N;
    cin >> M >> N;

    int totalSquares = M * N;
    int maximalNumberDominoes = totalSquares / 2;

    cout << maximalNumberDominoes << endl;

    return 0;
}