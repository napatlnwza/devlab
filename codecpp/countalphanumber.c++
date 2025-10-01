// https://www.borntodev.com/devlab/task/1706
#include <iostream>
#include <string>
using namespace std;

int main() {
    string win;
    getline(cin,win);
    int count=0;
    for (int i=0;i<win.length()-1;i++) {
        if (win[i] >= 1) {
            ++count;
        }
        else if (win[i] != ' ' && win[i] != '!' && win[i] != '?' && win[i] != '.') {
            ++count;
        }
    }
    cout << count-1;
    return 0;
}