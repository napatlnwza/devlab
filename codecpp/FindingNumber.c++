// https://www.borntodev.com/devlab/task/311
#include <iostream>

using namespace std;

int main() {
    int n,found;
    cin >> n;
    int findd[n];
    for (int i=0;i<n;i++) {
        cin >> findd[i];
    }
    cin >> found;
    if (n==0) {
        cout << "0";
    }
    else {
        bool m=false;
        for (int i=0;i<n;i++) {
            if (findd[i] == found) {
                m=true;
                break;
            }
        }
        if (m) cout << "Yes";
        else cout << "No";
    }
    return 0;
}