// https://www.borntodev.com/devlab/task/1695
#include <iostream>
#include <limits>
using namespace std;

unsigned long long fac(int a) {
    if (a == 1 || a == 0) {
        return 1;
    }
    else if (a != 1) {
        return (unsigned long long) a * fac(a-1);
    }
}

int main() {
    int n,k;
    cin >> n;
    cin >> k;
    unsigned long long ans = fac(n) / (fac(k) * fac(n - k));
    cout << ans;
}