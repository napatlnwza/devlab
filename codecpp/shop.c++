// https://www.borntodev.com/devlab/task/906
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int unit;
    double price;
    char member;
    cin >> unit;
    cin >> price;
    cin >> member;
    if (member == 'x') {
        double total,dis,result;
        total=(double)unit * price;
        if (total<=500) {
            dis=total*0.1;
            result=total-dis;
        }
        else if (total > 500 && total < 1000) {
            dis=total*0.15;
            result=total-dis;
        }
        else if (total > 1000) {
            dis=total*0.2;
            result=total-dis;
        }
        cout << "Total " << fixed << setprecision(2) << total << endl;
        cout << "Discount " << fixed <<setprecision(2) << dis << endl;
        cout << "Amount " << fixed << setprecision(2) << result << endl;
    }
    else if (member == 'y') {
        double total,dis,result;
        total=(double)unit * price;
        if (total<=500) {
            dis=total*0.05;
            result=total-dis;
        }
        else if (total > 500 && total < 1000) {
            dis=total*0.1;
            result=total-dis;
        }
        else if (total > 1000) {
            dis=total*0.15;
            result=total-dis;
        }
        cout << "Total " << fixed << setprecision(2) << total << endl;
        cout << "Discount " << fixed << setprecision(2) << dis << endl;
        cout << "Amount " << fixed << setprecision(2) << result << endl;
    }
    return 0;
}