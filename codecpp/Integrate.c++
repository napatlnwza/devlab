#include <iostream>
#include <cmath>
using namespace std;

int integrate(int a,int b) {
    int ans;
    //  3x^2 + 2x + 5
    ans=(3*pow(a,2))+2*a+5;
    return ans;
}

int main() {
    int x,y;
    cin >> x;
    cin >> y;
    cout << integrate(x,y);
    return 0;
}