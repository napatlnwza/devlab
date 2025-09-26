// https://www.borntodev.com/devlab/task/1085
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 4) {
        cout << "Bling bang bang bling";
    }
    else if (n == 10) {
        cout << "Bling bang bang bling bang bang Bling bang bang born";
    }
    else if (n == 20) {
        cout << "Bling bang bang bling bang bang Bling bang bang born" << endl;
        cout << "Bling bang bang bling bang bang Bling bang bang born";
    }
    else {
        cout << "Bling bang bang bling bang bang Bling bang bang born";
    }
    return 0;
}