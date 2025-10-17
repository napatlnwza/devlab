// https://www.borntodev.com/devlab/task/456
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin,line);
    string count="";
    for (int i=0;i<line.length();i++) {
        if (islower(line[i])) {
            count+=toupper(line[i]);
        }
        else if (isupper(line[i])) {
            count+=tolower(line[i]);
        }
        else if (!islower(line[i]) && !isupper(line[i])) {
            count+=line[i];
        }
    }
    cout << count;
    return 0;
}