//หาค่าเฉลี่ยของจำนวนเต็ม x ตัว
//intput 2
//3
//7
//out 5
#include <iostream>
#include <vector>
//#include <iomanip> ใช้ setprecision ()
using namespace std;

int main() {
    int a;
    vector<int> n;
    cin >> a;
    for (int i=0;i<a;i++) {
        int p;
        cin >> p;
        n.push_back(p);
    }
    float avr, sum=0;
    
    for (int i=0;i<a;i++) {
        sum+=n[i];
    }
    avr=sum/a;
    printf("%.1f" ,avr);
    return 0;
}