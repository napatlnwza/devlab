// https://www.borntodev.com/devlab/task/423
#include <iostream>
using namespace std;

int main() {
    int bank;
    cin >> bank;
    if (bank % 100 != 0) {
        cout << 0;
    }
    else {
        int ten,five,one;
        ten=bank/1000;
        bank%=1000;
        five=bank/500;
        bank%=500;
        one=bank/100;
        bank%=100;
        cout << "1000 * " << ten << endl;
        cout << "500 * " << five << endl;
        cout << "100 * " << one << endl;
    }
    
    return 0;
}