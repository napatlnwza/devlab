// https://www.borntodev.com/devlab/task/1315
#include <iostream>
#include <string>
using namespace std;

int main() {
    string alpha;
    getline(cin,alpha);
    int sum=0;
    for (char a : alpha) {
        if ('A' <= a &&  a <= 'Z') {
            sum+=(a-'A' + 1);
        }
        else if ('a' <= a && a <='z') {
            sum+=(a-'a' + 1);
        }
    }
    cout << sum;
    return 0;
}