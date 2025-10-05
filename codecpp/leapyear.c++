// https://www.borntodev.com/devlab/task/33
#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    if (y%4 == 0 ) {
        cout << "Leap Year";
    }
    else if (y%4 != 0 && y%100 == 0) {
        cout << "Not a Leap Year";
    }
    else if (y == 1800) {
        cout << "Not a Leap Year";
    }
    return 0;
}