#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    if (1<=n && n<=1000){
        for (int i =0; i < n; i++){
            int a, b, c;
            cin >> a >> b >> c;
            if ( a + b + c >= 2){
                count +=1;
            }
        }
        cout << count;
    }
    return 0;
}
