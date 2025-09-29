// https://www.borntodev.com/devlab/task/1112
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int count=0;
    for (int i=1;i<=a;i++) {
        if (a/i == 0) {
            cout << i << endl;
            count++;
        }

    }
    cout << "There is " << count << " Number";
}