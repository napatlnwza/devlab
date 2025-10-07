//นับจำนวน ของ i 
//รับค่า string
//'hello' output 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    string poom;
    cout << "Enter String : ";
    cin >> poom;
    int i=0;
    while (i<poom.length()) {
        i++;
    }
    cout << i;
    return 0;
}