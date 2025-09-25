//บรรทัดที่ 1 รับตัวเลข n1
//บรรทัดที่ 2 รับตัวเลข n2
//แสดงตัวเลขตั้งแต่ตัวที่ n1 จนถึงตัวเลขตัวที่ n2
#include <iostream>
using namespace std;

int main() {
    int n1,n2,a;
    cin >> n1;
    cin >> n2;
    a=n1;
    cout << n1;
    for (int i=0;a<n2;i++) {
        a++;
        cout << " " << a;
    }
    return 0;
}