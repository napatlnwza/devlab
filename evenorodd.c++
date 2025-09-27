// https://www.borntodev.com/devlab/task/755
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    while (true) {
        int i;
        cin >> i;
        if (i == 0) {
            break;
        }
        a.push_back(i);
    }
    for (int i=0;i<a.size();i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " = even" << endl;
        }
        else if (a[i] % 2 != 0) {
            cout << a[i] << " = odd" << endl;
        }
    }
    return 0;
}