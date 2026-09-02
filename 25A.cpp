#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    int nums;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    for (int i = 1 ; i <= n ; i++) {
        cin >> nums;
        if(nums%2 == 0) {
            even.push_back(i);
        }
        else odd.push_back(i);
    }
    if (odd.size() == 1) {
        cout << odd[0];
    }
    else cout << even[0];
    return 0;
}
