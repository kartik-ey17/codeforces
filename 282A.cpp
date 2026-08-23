#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ops;
    int count = 0;
    for (int i = 1; i <= n ; i++ ) {
        cin >> ops; 
        if (ops == "X++" || ops == "++X") {
            count++;
        }
        else {
            count--;
        }
    }
    cout << count;
    return 0;
}