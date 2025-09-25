// รายการคู่คี่
// https://www.borntodev.com/devlab/task/1108
#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin,num);
    for (int i=0;i<num.length();i++) {
        if (num[i] % 2 == 0) {
            cout << num[i];
        }
        if (i==num.length()-1) {
            cout << endl;
        }
    }
    for (int i=0;i<num.length();i++) {
        if (num[i] % 2 != 0) {
            cout << num[i];
        }
        cout << " ";
    }
    return 0;
}