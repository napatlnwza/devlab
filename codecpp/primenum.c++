#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool prime=true;
    int n;
    cin >> n;
    if (n<=1) {
        cout << "Not prime";
        return 0;
    }
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i ==0) {
            prime = false;
            break;
        }
    }
    if (prime) cout << "prime";
    else if (!prime) cout << "Not prime";
    return 0;
}