// https://www.borntodev.com/devlab/task/618
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    float w,l,ans;
    string tri;
    cin >> w;
    cin >> l;
    ans=0.5*w*l;
    tri=ans;
    for (int i=0;i<tri.length()-1;i++) {
        if (tri[i] == '.') {
            int Ans=ans;
            cout << ans;
        }
        else if (tri[i] != '.') {
            printf("%.f" ,ans);
        }
    }
    return 0;
}