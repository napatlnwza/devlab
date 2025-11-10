#include <iostream>
#include <string>
#include <cctype> 
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
const double pi =3.14159;
#define ar 0.5
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

double circle(double r) {
    return pi*pow(r,2);
}

double rectang(double w,double l) {
    return w*l;
}

double Triangle(double h,double b) {
    return ar*h*b;
}

double Square(double side) {
    return pow(side,2);
}

int check(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

double applyOp(double a,double b,char op) {
    switch (op) {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            if (b==0) {
                cout << "Error";
                return 0;
            }
            else {
                return a/b;
            }
        default :
            return 0;
    }
}

double multinumber(string line) {
    stack<double> hold;
    stack<char> oper;
    string num="";
    for (int i=0;i<line.length();i++) {
        char c=line[i];
        if (isspace(c)) {
            continue;
        }
        if (isdigit(c) || c=='.') {
            num+=c;
        }
        else if (!isdigit(c)) {
            if (!num.empty()) {
                hold.push(stod(num));
                num="";
            }
            while (!oper.empty() && check(oper.top()) >= check(c)) {
                double val2=hold.top();
                hold.pop();
                double val1=hold.top();
                hold.pop();
                char op=oper.top();
                oper.pop();
                hold.push(applyOp(val1,val2,op));
            }
            oper.push(c);
        }
    }
    if (!num.empty()) {
        hold.push(stod(num));
    }
    while (!oper.empty()) {
        double val2=hold.top();
        hold.pop();
        double val1=hold.top();
        hold.pop();
        char op=oper.top();
        oper.pop();
        hold.push(applyOp(val1,val2,op));
    }
    return hold.top();
}

int main() {
    cout << "This is calculator program" << endl;
    cout << "1.Basic Number" << endl;
    cout << "2.Multiple Number" << endl;
    cout << "3.Find Area" << endl;
    cout << "4.Find Average " << endl;
    cout << "Enter Choice : ";
    string line;
    getline(cin ,line);
    for (char &c:line) {
        c=tolower(c);
    }
    bool basic=false,mul=false,find=false,Aver=false;
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
        else if (line[i] == '4' || line[i] == 'a') {
            Aver=true;
            break;
        }
    }
    if (basic) {
        double a,b;
        bool plus=false,minus=false,multi=false,divine=false;
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
            return 0;
        }
        else if (minus) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << isminus(a,b);
            return 0;
        }
        else if (multi) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << ismulti(a,b);
            return 0;
        }
        else if (divine) {
            cout << "Input A : ";
            cin >> a;
            cout << "Input B : ";
            cin >> b;
            cout << "Ans is " << isdivine(a,b);
            return 0;
        }
    }
    if (mul) {
        string line;
        cout << "Input Multiple Number : ";
        getline(cin,line);
        double ans=multinumber(line);
        cout << "Ans is " << ans;
        return 0;
    }
    if (find) {
        cout << "1.Circle Area" << endl;
        cout << "2.Rectangular Area" << endl;
        cout << "3.Triangle Area" << endl;
        cout << "4.Square Area" << endl;
        cout << "Enter Choice : ";
        string ch;
        getline(cin,ch);
        for (char &i:ch) {
            i=tolower(i);
        }
        bool cir=false,rec=false,tri=false,squ=false;
        for (char i:ch) {
            if (i == '1' || i == 'c') {
                cir=true;
                break;
            }
            else if (i == '2' || i == 'r') {
                rec=true;
                break;
            }
            else if (i == '3' || i == 't') {
                tri=true;
                break;
            }
            else if (i == '4' || i == 's') {
                squ=true;
                break;
            }
        }
        if (cir) {
            double r;
            cout << "Input radius : ";
            cin >> r;
            cout << "Circle Area is " << circle(r);
            return 0;
        }
        if (rec) {
            double w,l;
            cout << "Input wide : ";
            cin >> w;
            cout << "Input long : ";
            cin >> l;
            cout << "Rectangular Area is " << rectang(w,l);
            return 0;
        }
        if (tri) {
            double h,b;
            cout << "Input Hight : ";
            cin >> h;
            cout << "Input Base : ";
            cin >> b;
            cout << "Triangle Area is " << Triangle(h,b);
            return 0;
        }
        if (squ) {
            double side;
            cout << "Input Side : ";
            cin >> side;
            cout << "Square Area is " << Square(side);
            return 0;
        }
    }
    if (Aver) {
        vector<double> data;
        int ndata;
        string know;
        cout << "Do you know Num of  Data ? (yes or no) : ";
        getline(cin,know);
        bool know1=false;
        for (char &i:know) {
            i=tolower(i);
            if (i == 'y') {
                know1=true;
            }
            else if (i == 'n') {
                know1=false;
            }
        }
        if (know1) {
            cout << "Enter Num of Data : ";
            int a;
            cin >> a;
            for (int i=0;i<a;i++) {
                int k;
                cout << "Input Data " << i+1 << " : ";
                cin >> k;
                data.push_back(k);
            }
        }
        else if (!know1) {
            int count=0;
            string stop;
            cout << "If you write  stop  The program will stop accepting values" << endl;
            int i=1;
            while (true) {
                double l;
                cout << "Input Data " << i << " : ";
                getline(cin,stop);
                if (stop == "stop" || stop == "Stop") {
                    break;
                }
                l=stod(stop);
                data.push_back(l);
                count++;
                i++;
            }
        }
        double sum=0;
        for (int i=0;i<data.size();i++) {
            sum+=data[i];
        }
        double avr=sum/(data.size());
        cout << "The Average is " << avr;
        return 0;
    }
    return 0;
}