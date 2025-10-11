// https://programming.in.th/tasks/0005
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c;
    cin >> a >> b;
    c=pow(a,2)+pow(b,2);
    c=sqrt(c);
    cout << fixed << setprecision(6) << c;
    return 0;
}