// https://www.borntodev.com/devlab/task/816
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string line;
    vector<int> num;
    while (true) {
        int a;
        cin >> a;
        if (a == 0) break;
        num.push_back(a);
    }
    cin >> line;
    if (line == "Max") {
        sort(num.begin(),num.end(),greater<int>());
        for (int i=0;i<num.size();i++) {
            cout << num[i] << " ";
        }
    }
    if (line == "Min") {
        sort(num.begin(),num.end());
        for (int i=0;i<num.size();i++) {
            cout << num[i] << " ";
        }
    }
    if (line == "Sum") {
        int sum=0;
        for (int i=0;i<num.size();i++) {
            sum+=num[i];
        }
        cout << sum;
    }
    if (line != "Max" && line != "Min" && line != "Sum") {
        cout << 0;
    }
    return 0;
}