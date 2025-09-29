// https://www.borntodev.com/devlab/task/1317
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string puzzle;
    vector<int> a;
    getline(cin,puzzle);
    for (int i=0;i<puzzle.length();i++) {
        int m;
        cin >> m;
        a.push_back(m);
    }
    for (int i=0;i<puzzle.length();i++) {
        int temp;
        if (a[i]==puzzle[i]) {
            temp=puzzle[i];
        }
        cout << temp;
    }
    return 0;
}