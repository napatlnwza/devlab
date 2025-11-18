#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    bool tf;
    cout << "Input Num : ";
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        int random=rand();
        if (random%2 == 0) {
            tf=true;
            cout << tf << " ";
        }
        else if (random%2 != 0) {
            tf=false;
            cout << tf << " ";
        }
        if (i %5 ==0) cout << endl;
    }
}