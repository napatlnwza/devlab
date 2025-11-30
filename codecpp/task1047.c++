#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    if (n > 0) {
        vector<string> line(n);
        for (int i=0;i<n;i++) {
            getline(cin ,line[i]);
        }
        cout << "Now, You have " << n << " courses." << endl;
        for (int i=0;i<n;i++) {
            cout << "Course " << i+1 << " : " << line[i] << endl;
        }
    }
    else if (n==0) {
        cout << "No courses.";
    }
    else if (n<0) {
        cout << "Please enter number greater than or equal to -1.";
    }
    return 0;
}