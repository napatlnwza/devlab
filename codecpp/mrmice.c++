// https://www.borntodev.com/devlab/task/1229
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food;
    int table;
    for (int fd=0; fd < food.length();fd++) {
        if (table >= 0 && table < 100 ) {
            if (food[fd] != 'F' || food[fd] != 'B' || food[fd] != 'R' || food[fd] != 'S' || food[fd]  != 'F') {
                if (fd == food.length()-1) {
                    cout << "Sorry we not found that Table number :(";
                }
            }
        }
        else {
            if (fd == food.length() -1) {
                cout << "Sorry we not found that Table number :(";
            }
        }
    }
}
// ยังไม่เสร็จ