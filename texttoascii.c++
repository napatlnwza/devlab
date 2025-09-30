#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin,text);
    if (text.empty()) {
        cout << 0;
    }
    else {
        for (int i=0;i<text.length();i++) {
            if (text[i] == ' ') {
                cout << "/ ";
            }
            else {  
                cout << (int)text[i] << " ";
            }
        }
    }
    return 0;
}