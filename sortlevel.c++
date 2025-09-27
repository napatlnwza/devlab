// https://www.borntodev.com/devlab/task/1726
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a;
    vector<int> m;
    cin >> a;
    for (int i=0;i<a;i++) {
        int r;
        cin >> r;                               // ใช้ vector
        m.push_back(r);
    }
    sort(m.begin(),m.end(),greater<int>());
    cout << m[0] << " ";
    sort(m.begin(),m.end());
    cout << m[0];


    int n[a];
    for (int i=0;i<a;i++) {                     // ใช้ Array
        cin >> n[i];
    }
    sort(n,n+a,greater<int>());
    cout << n[0] << " ";
    sort(n,n+a);
    cout << a[0];
    return 0;
}