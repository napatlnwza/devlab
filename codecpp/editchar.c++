// https://www.borntodev.com/devlab/task/1189
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a;
    getline(cin,a);
    string Vowel="aeiouAEIOU";
    bool vowel=false,alphabet=false,num=false;
    for (int i=0;i<a.length();i++) {
        if (Vowel.find(a[i]) != string::npos) {
                vowel=true;
        }
        else if (isdigit(a[i])) {
            num=true;
        }
        else if (Vowel.find(a[i]) == string::npos) {
            alphabet=true;
        }
    }
    if (vowel) {
        cout << "Vowel(s):" << endl;
        for (char i:a) {
            if (Vowel.find(i) != string::npos) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    if (alphabet) {
        cout << "Alphabet(s):" << endl;
        for (char i:a) {
            if (isalpha(i) && Vowel.find(i) == string::npos) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    if (num) {
        cout << "Number(s):" << endl;
        for (char i:a) {
            if (isdigit(i)) {
                cout << i << " ";
            }
        }
    }
    return 0;
}