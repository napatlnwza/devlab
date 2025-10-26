// https://www.borntodev.com/devlab/task/1750
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name,age,stat;
    getline(cin,name);
    getline(cin,age);
    string a="";
    for (int i=0;i<age.length();i++) {
        if (isdigit(age[i])) {
            a+=age[i];
            continue;
        }
        else if (!isdigit(age[i])) {
            break;
        }
    }
    bool gender;
    int guea=stoi(a);
    for (int i=0;i<age.length();i++) {
        if (age[i] == 'M' || age[i] == 'm') {
            gender=true;
        }
        else if (age[i] == 'F' || age[i] == 'f') {
            gender=false;
        }
    }
    if (guea >= 15) {
        getline(cin,stat);
        for (int i=0;i<stat.length();i++) {
            stat[i]=tolower(stat[i]);
        }
    }
    bool yn;
    if (stat[0] == 'y') {
        if (stat[1] == 'e') {
            if (stat[2] == 's') {
                yn=true;
            }
        }
    }
    else if (stat[0] == 'n') {
        if (stat[1] == 'o') {
            yn=false;
        }
    }
    if (guea < 15) {
        if (gender) {
            cout  << "Master " ;
            for (char i:name) {
                cout << i;
            }
        }
        else if (!gender) {
            cout << "Miss ";
            for (char i:name) {
                cout << i;
            }
        }
    }
    else if(guea >= 15) {
        if (gender) {
            cout << "Mr ";
            for (char i:name) {
                cout << i;
            }
        }
        else if (!gender) {
            if (yn) {
                cout << "Mrs ";
                for (char i:name) {
                    cout << i;
                }
            }
            else if (!yn) {
                cout << "Miss ";
                for (char i:name) {
                    cout << i;
                }
            }
        }
    }
    return 0;
}