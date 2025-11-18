#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int random=rand()%101;
    while (true){
        int num;
        cout << "Input Number : ";
        cin >> num;
        if (num == random) {
            cout << "Correct good!" << endl;
            break;
        }
        else if (num > random) {
            cout << "Too Hight" << endl;
        }
        else if (num < random) {
            cout << "Too Low" << endl;
        }
    }
    return 0;
}