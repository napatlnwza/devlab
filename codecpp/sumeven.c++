#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[a];
    int sum=0;
    for (int i=0;i<a;i++) {
        cin >> arr[i];
        if (arr[i] %2 ==0) {
            sum+=arr[i];
        }
    }
    cout << sum;
    return 0;
}