// https://www.borntodev.com/devlab/task/733
#include <iostream>
using namespace std;

int main() {
    int fac,ans=1;
    cin >> fac;
    if (fac == 1) {
        cout << 1;
    }
    else if (fac != 1) {
        for (int i=1;i<=fac;i++) {
            ans*=i;
        }
        cout << ans;
    }
    return 0;
}