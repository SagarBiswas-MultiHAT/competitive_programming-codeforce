#include<iostream>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int score[50];
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    for (int i = 0; i < n; i++) {
        if (score[i] >= score[k - 1] && score[i] > 0) {
            // We used score[k - 1] cos the score[] starts from 0 number index; 0 means 1st place. Therefore, if k = 4, we need to check the k-th place using score[3].
            count++;
        }
    }
    cout << count << endl;

    return 0;
}