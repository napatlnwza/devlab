// https://www.borntodev.com/devlab/task/1081
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<int> n;
    int a;
    while (true) {
        int a;
        cin >> a;
        if(a==-1) {
            break;
        }
        n.push_back(a);
    }
    double sum=0;
    if (n.size() != 0) {
        for (int i=0;i<n.size();i++) {
        sum+=n[i];
        }
        double avr;
        avr=sum/n.size();
        cout << fixed << setprecision(2) << avr;
    }
    else {
        cout << -1;
    }
    return 0;
}