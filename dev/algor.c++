#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> A={5,15,-30,10,-5,40,10};
    int sum;
    int max=-999;
    for (int i=0;i<A.size()-1;i++) {
        for (int j=A.size()-1;j>=i;j--) {
            sum=0;
            for (int k=i;k<=j;k++) {
                sum+=A[k];
            }
            if (sum>max) {
                max=sum;
            } 
        }
    }
    cout << max;
    return 0;
}