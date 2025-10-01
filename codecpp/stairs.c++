#include <iostream>
using namespace std;

int main() {
    //ผู้ใช้งานกรอกตัวเลขลงไป (ที่เป็นจำนวนขั้น) *
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}