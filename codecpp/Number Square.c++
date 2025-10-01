// https://www.borntodev.com/devlab/task/1183
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <=0) {
        cout << "ERROR";
    }
    else if (n>0) {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                cout << n;
            }
            cout << endl;
        }
    }
    return 0;
}