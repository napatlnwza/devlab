// https://www.borntodev.com/devlab/task/1513
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin , a);
    string count="";
    for (char str : a) {
        if (isalpha(str)) {
            count+=str;
        }
    }
    cout << count;
    return 0;
}