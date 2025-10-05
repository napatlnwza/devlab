// https://www.borntodev.com/devlab/task/1147
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mline;
    getline(cin, mline); 
    char f;
    cin >> f; 
    int pos = -1;  
    int order = 0;  
    for (int i = 0; i < mline.length(); i++) {
        if (mline[i] != ' ') {  
            order++;         
            if (mline[i] == f) {
                pos = order;
                break;
            }
        }
    }
    cout << pos;
    return 0;
}
