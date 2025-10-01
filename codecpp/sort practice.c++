// https://www.borntodev.com/devlab/task/1030
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> n;
    for (int i=0;i<3;i++) {
        int a;
        cin >> a;
        n.push_back(a);
    }
    sort(n.begin(),n.end(),greater<int>());
    // for (int i = 1; i < 30; i++)
    // {
    //     int min = n[i];
    //     int j = i - 1;
    //     while (j >= 0 && n[j] < min)
    //     {
    //         n[j - 1] = n[j];
    //         j--;
    //     }

    //     n[j - 1] = min;
    // }
    for (int i=0;i<3;i++) {
        cout << n[i] << endl;
    }
    return 0;
}