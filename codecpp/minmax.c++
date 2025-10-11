// https://programming.in.th/tasks/0002
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numdata;
    cin >> numdata;
    int data[numdata];
    for (int i=0;i<numdata;i++) {
        cin >> data[i];
    }
    sort(data,data+numdata);
    cout << data[0] << endl << data[numdata-1];
    return 0;
}