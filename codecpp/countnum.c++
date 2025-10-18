#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin,line);
    int count=0;
    for (char a:line) {
        if  (isalpha(a)) {
            count++;
        }
    }
    cout << count;
    return 0;
}