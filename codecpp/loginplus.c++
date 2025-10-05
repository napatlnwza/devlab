// https://www.borntodev.com/devlab/task/1515
#include <iostream>
#include <string>
using namespace std;

string user,username,pass,password,passcon;

bool regis(string p,string pc) {
    return p == pc;
}

int main() {
    char logorre;
    string userold;
    int i=1;
    while (cin >> logorre) {
        if (logorre == 'R' ) {
            cin.ignore();
            getline(cin,user);
            getline(cin,pass);
            getline(cin,passcon);
            if (regis(pass,passcon) == true) {
                cout << "RegisterSuccess";
                break;

            }
            if (userold == user && i>=2) {
                cout << "Usernamealreadyused";
                break;
            }
        }
        if (logorre == 'L') {
            getline(cin,username);
            getline(cin,password);
            if (username == userold && password == pass) {
                cout << "LoginSuccess";
            }
            else if (username != userold || password != pass) {
                cout << "UsernameorPasswordwrong";
            }
            i++;
        }
    }
}