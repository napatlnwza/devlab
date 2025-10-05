// https://www.borntodev.com/devlab/task/1207
#include <iostream>
#include <string>
using namespace std;

int main() {
    string pk;
    getline(cin,pk);
    int sum=0;
    for (int i=0;i<pk.length();i++) {
        sum+=(int)pk[i];
    }
    cout << sum;
    return 0;
}