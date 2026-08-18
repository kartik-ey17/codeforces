#include <iostream>
using namespace std;

int main() {
    int n;
    int o;
    o = 0;
    cin >> n;
    while(n--) {
        int p,v,t;
        cin>>p >> v >> t;
        if (p+v+t >= 2) 
            o = o+1;
    }
    cout << o <<endl;

    return 0;
}