// https://www.borntodev.com/devlab/task/1177
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string num;
    getline(cin,num);
    double xbar;
    int sum=0,count=0;
    for (int i=0;i<num.length();i++) {
        if (num[i] != ' ') {
            int p=num[i]='0';
            sum+=p;
            count++;
        }
    }
    xbar=sum/count;
    double sd=0,sumsd=0;
    for (int i=0;i<num.length();i++) {
        if (num[i] != ' ') {
            int xi=num[i]-'0';
            sumsd+=pow((xi-xbar),2);
        }
    }
    sd=sqrt(sumsd/(count-1));
    cout << sd;
    return 0;
}