// https://www.borntodev.com/devlab/task/1155
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double us,yen,keb,mmk;
    int bath;
    cin >> bath;
    us=bath * 36.52;
    yen=bath * 0.24;
    keb=bath * 0.0017;
    mmk=bath * 0.017;
    cout << bath << ".0" << " THB" << endl;
    cout << fixed << setprecision(5) << us << " USD" << endl;
    cout <<  fixed << setprecision(1) << keb << " LAK" << endl;
    cout << fixed << setprecision(3) << yen << " JPY" << endl;
    cout << fixed << setprecision(2) << mmk << " MMK" << endl;
    return 0;
}