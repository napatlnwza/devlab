// https://www.borntodev.com/devlab/task/29
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b[a];
    for (int i=0;i<a;i++) {
        cin >> b[i];
    }
    sort(b,b+a,greater<int>());
    for (int i=0;i<a;i++) {
        cout << b[i] << endl;
    }
    return 0;
}