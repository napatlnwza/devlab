#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

double isplus(double a,double b) {
    return a+b;
}

double isminus(double a,double b) {
    return a-b;
}

double ismulti(double a,double b) {
    return a*b;
}

double isdivine(double a,double b) {
    
    if (b == 0) {
        cout << "Cannot divine by zero!";
        return 0;
    }
    else {
        return a/b;
    }
}

int main() {
    cout << "This is calculator program" << endl;
    cout << "1.Basic Number" << endl;
    cout << "2.Multiple Number (Soon)" << endl;
    cout << "3.Find Area" << endl;
    cout << "Enter Choice : ";
    string line;
    getline(cin ,line);
    for (char &c:line) {
        c=tolower(c);
    }
    bool basic=false,mul=false,find=false;
    for (int i=0;i<line.length();i++) {
        if (line[i] == '1' || line[i] == 'b') {
            basic=true;
            break;
        }
        else if (line[i] == '2' || line[i] == 'm') {
            mul=true;
            break;
        }
        else if (line[i] == '3' || line[i] == 'f') {
            find=true;
            break;
        } 
    }
    if (basic) {
        double a,b;
        bool plus,minus,multi,divine;
        cout << "1.A+B" << endl;
        cout << "2.A-b" << endl;
        cout << "3.A*B" << endl;
        cout << "4.A/B" << endl;
        string l;
        cout << "Enter choice : ";
        getline(cin,l);
        for (char i:l) {
            if (i == '1' || i == '+') {
                plus=true;
                break;
            }
            else if (i == '2' || i == '-') {
                minus=true;
                break;
            }
            else if (i == '3' || i == '*') {
                multi=true;
                break;
            }
            else if (i == '4' || i == '/') {
                divine=true;
                break;
            }
        }
        if (plus) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << isplus(a,b);
        }
        else if (minus) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << isminus(a,b);
        }
        else if (multi) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << ismulti(a,b);
        }
        else if (divine) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << isdivine(a,b);
        }
    }
    return 0;
}