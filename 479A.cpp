#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b , c;
    cin >> a; 
    cin >> b;
    cin >> c;
    int mx = max({a,b,c});
    int res = 0;
    res = mx*(a+b+c-mx);
    int maxim = a*b*c;
    int sum = a+b+c;
    res = max({res,maxim,sum});
    cout << res << endl;
    return 0;
}