// https://www.borntodev.com/devlab/task/1751
#include <iostream>
#include <vector>
#include <algorithm>
#include <map> 
#include <iomanip>
using namespace std;

int main() {
    vector<int> data;
    int a;
    while (cin >> a) {
        data.push_back(a);
    }


    int sum=0;
    for (int i=0;i<data.size();i++) {
        sum+=data[i];
    }


    int avr;
    avr=sum/data.size()-1;


    sort(data.begin(),data.end());
    double mid=0;
    if (data.size() % 2 == 1) {
        mid=data[data.size()/2];
    }
    else {
        mid=(data[data.size() /2-1] + data[data.size()/2]) /2.0;
    }


    map<int , int> f;
    double mode=data[0];
    int count=0;
    for (int n: data) {
        f[n]++;
    }
    for (auto p:f) {
        if (p.second>count) {
            count=p.second;
            mode=p.first;
        }
    }


    double Max;
    Max=*max_element(data.begin(),data.end());


    double Min;
    Min=*min_element(data.begin(),data.end());


    cout << "Data ";
    for (int i=0;i<data.size();i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Sum " << sum << endl;
    cout << "Mean " << avr << endl;
    cout << "Median "  << mid << endl;
    cout << "Mode " << fixed << setprecision(2) << mode << endl;
    cout << "Max " << fixed << setprecision(2) << Max << endl;
    cout << "Min " << fixed << setprecision(2) << Min << endl;
    return 0;
}