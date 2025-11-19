#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    cout << "*****(Rock-Paper-Scissors)*****" << endl;
    while (true) {
        cout << "You are ready ? (Y/N) : ";
        string yn;
        getline(cin,yn);
        for (char &i:yn) i=tolower(i); 
        if (yn == "yes" || yn == "y"){
            cout << "Start Game!" << endl;
            break;
        }
        else if (yn == "no" || yn == "n") {
            cout << "Exit Game!" << endl;
            return 0;
        }
        else {
            cout << "Invalid input " << endl;
            continue;
        }
    }
    srand(time(0));
    while (true) {
        int comp=rand()%3;
        // paper = 0,rock=1,sciccor=2
        string player;
        int play;
        while (true) {
            cout << "1.Paper" << endl;
            cout << "2.Rock" << endl;
            cout << "3.Scissors" << endl;
            cout << "Enter choice : ";
            getline(cin,player);
            for (char &i:player) {
                i=tolower(i);
                if (i=='1' || i== 'p') {
                    play=0;
                    break;
                }
                else if (i=='2' || i=='r') {
                    play=1;
                    break;
                }
                else if (i=='3' || i=='s') {
                    play=2;
                    break;
                }
            }
            break;
        }
        if (play == comp) {
            cout << "Draw" << endl;
            while (true) {
                cout << "play Again (Y/N) ? : ";
                string check;
                getline(cin,check);
                for (char &i:check) i=tolower(i);
                if (check=="yes" || check == "y") break;
                else if (check=="no" || check=="n") return 0;
                else {
                    cout << "Invalid input" << endl;
                }
            }
        }
        else if ((play == 0&&comp == 1)||(play == 1&&comp == 2)||(play == 2 && comp == 0)) {
            cout << "You Win!!!" << endl;
            return 0;
        }
        else {
            cout << "You lost TT" << endl;
            while (true) {
                cout << "Play Again (Y/N) ? : ";
                string check;
                getline(cin,check);
                for (char &i:check) i=tolower(i);
                if (check=="yes" || check == "y") break;
                else if (check == "no" || check =="n") return 0;
                else cout << "Invalid input " << endl;
            }
        }
    }
    return 0;
}