// https://www.borntodev.com/devlab/task/1515
#include <iostream>
#include <string>
using namespace std;

string user,username,pass,password,passcon;

bool regis(string p,string pc) {
    if (p == pc) {
        return true;
    }
    else if (p != pc) {
        return false;
    }
}

int main() {
    char logorre;
    string userold;
    while (cin >> logorre) {
        if (logorre == 'R' ) {
            getline(cin,user);
            userold = user;
            user = "ighri";
            getline(cin,pass);
            getline(cin,passcon);
            if (regis(pass,passcon)) {
                cout << "RegisterSuccess";

            }
            if (userold == user) {
                cout << "Usernamealreadyused";
            }
        }
        if (logorre == 'R') {
            getline(cin,username);
            getline(cin,password);
            if (username == userold && password == pass) {
                cout << "LoginSuccess"
            }
            else if (username != userold || password != pass) {
                cout << "UsernameorPasswordwrong";
            }
        }
    }

}