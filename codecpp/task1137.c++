// https://www.borntodev.com/devlab/task/1137
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num;
    int sum=0;
    while (true) {
        int a;
        cin >> a;
        if (a == 0) break;
        num.push_back(a);
    }
    for (int i=0;i<num.size();i++) {
        sum+=num[i];
    }
    cout << sum << endl;
    for (int i=0;i<num.size();i++) {
        cout << i+1 << " , " << num[i] << endl;
    }
    return 0;
}