// https://www.borntodev.com/devlab/task/223

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin,a);
    int sum=0;
    string b="";
    for (int i=0;i<a.length();i++) {
        if (isdigit(a[i])) {
            b+=a[i];
            if(i == a.length() - 1) sum+= stoi(b);
        }
        else if (i != 0 && isdigit(a[i-1])) {
            int p=stoi(b);
            b="";
            sum+=p;
        }
    }
    string c=to_string(sum);
    while (c.length()<4) {
        c='0'+c;
    }
    cout << c;
    return 0;
}