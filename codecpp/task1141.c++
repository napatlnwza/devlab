// https://www.borntodev.com/devlab/task/1141
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string correct,ans;
    getline(cin,correct);
    getline(cin,ans);
    if (correct.length() != ans.length()) {
        cout << "ERROR";
        return 0;
    }
    else if (correct.length() == ans.length()) {
        int count=0,all=0;
        for (int i=0;i<correct.length();i++) {
            if (correct[i] == ans[i] && ans[i] != '-' && correct[i] != '-') {
                count++;
            }
            if (isalpha(correct[i]) && correct[i] != '-') {
                all++;
            } 
            else if (correct[i] != ans[i] || ans[i] == '-' || correct[i] == '-') {
                continue;
            }
        }
        cout << "Total score = " << count << "/" << all;
        return 0;
    }
    return 0;
}