// https://www.borntodev.com/devlab/task/661

#include <iostream>
#include <vector>
#include <cmath>   // สำหรับใช้ sqrt()

using namespace std;

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int x) {
    if (x < 2) return false;             // น้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
    for (int i = 2; i <= sqrt(x); i++) { // ตรวจจนถึงรากที่สองของ x
        if (x % i == 0) return false;    // ถ้าหารลงตัว แปลว่าไม่ใช่
    }
    return true;                         // ถ้าไม่เจอตัวหารลงตัว → เป็นจำนวนเฉพาะ
}

int main() {
    int n;
    cin >> n;

    vector<int> primes; // เก็บจำนวนเฉพาะทั้งหมด

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    // แสดง list ของจำนวนเฉพาะ
    cout << "[";
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i];
        if (i != primes.size() - 1) cout << ", ";
    }
    cout << "]";
}
