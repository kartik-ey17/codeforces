#include <iostream>
using namespace std;

int main() {
    int k , n , w;
    cin >> k >> n >> w;
    int sum;
    sum = 0;
    for (int i = 1 ; i <= w ; i++) {
        sum = sum + (i*k);
    }
    int diff;
    if (sum>n) {
        diff = sum-n;
        cout << diff;
    }
    else {
        cout << 0;
    }
    return 0;
}