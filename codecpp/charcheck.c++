// https://programming.in.th/tasks/0004
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string line;
    cin >> line;
    bool big=false,low=false;
    for (char a : line) {
        if (isupper(a)) {
            big=true;
        }
        if (islower(a)) {
            low=true;
        }
    }
    if (big && low) {
        cout << "Mix";
    }
    else if (big) {
        cout << "All Capital Letter";
    }
    else if (low) {
        cout << "All Small Letter";
    }
    return 0;
}