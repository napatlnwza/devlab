#include <iostream>
#include <vector>
using namespace std;

// ฟังก์ชันคูณ big integer (vector) ด้วย int
vector<int> multiply(const vector<int>& a, int b) {
    vector<int> result;
    int carry = 0;
    for (int i = 0; i < a.size(); i++) {
        int temp = a[i] * b + carry;
        result.push_back(temp % 10);
        carry = temp / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

// factorial แบบ recursive
vector<int> fac(int n) {
    if (n == 1) {
        return vector<int>{1};  // base case → return 1
    }
    vector<int> smaller = fac(n - 1);  // recursive call
    return multiply(smaller, n);       // คูณผลลัพธ์เดิมด้วย n
}

int main() {
    int n;
    cin >> n;

    // if (n < 10 || n > 100) {
    //     cout << "input 10 - 100 only";
    //     return 0;
    // }

    vector<int> ans = fac(n);

    // print ย้อนกลับเพราะเก็บลำดับจากหลักหน่วยก่อน
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

    return 0;
}
