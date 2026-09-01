#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1 ; i <=n ; i++) {
        int m;
        cin >> m;
        sum += m/100.0;
    }
    cout << (sum/n)*100 << endl;
    return 0;
}