#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> A={5,15,-30,10,-5,40,10};
    for (int i=1;i<=A.size()-1;i++) {
        for (int j=i-1;j<A.size();j++) {
            if (A[j]+A[i]==20) {
                cout << A[i] << " " << A[j] << endl;
            }
        }
    }
    return 0;
}