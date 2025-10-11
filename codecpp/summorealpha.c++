// https://www.borntodev.com/devlab/task/1316
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string word;
    int m=0;
    while (cin >> a) {
        int sum=0;
        for (char ch : a) {
            if ('A' <= ch &&  ch <= 'Z') {
                sum+=(ch-'A' + 1);
            }
            else if ('a' <= ch && ch <='z') {
                sum+=(ch-'a' + 1);
            }
        }
        if (sum > m) {
            m=sum;
            word=a;
        }
        else if (m==sum) {
            if (word[0] > a[0]) {
                word=a;
            }
        }
    }
    cout << word;
    return 0;
}