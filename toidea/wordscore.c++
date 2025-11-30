#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin,line);
    int count=0;
    string vowell="aeiou";
    for (int i=0;i<line.length();i++) {
        char ch=tolower(line[i]);
        if (ch == ' ') {
            count+=3;
        }
        else if (vowell.find(ch) != string::npos) {
            count+=1;
        }
        else if (vowell.find(ch) == string::npos) {
            count+=2;
        }
    }
    cout << count;
    return 0;
}