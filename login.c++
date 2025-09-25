//ระบบล็อกอิน เล่นๆมั้ง
// ให้ผู้ใช้พิมพ์รหัสผ่าน (password = "1234")
// มีสิทธิ์ลองกรอกได้ 3 ครั้ง
// ถ้ากรอกถูก → แสดง "เข้าสู่ระบบสำเร็จ" และหยุด (break)
// ถ้ากรอกผิดครบ 3 ครั้ง → else ทำงาน แสดง "บัญชีถูกล็อก"
// กรอกรหัสผ่าน: 1111
// No!
// กรอกรหัสผ่าน: 2222
// No!
// กรอกรหัสผ่าน: 1234
// Yes
#include <iostream>
using namespace std;

int main() {
    int pass;
    for (int i=0;i<3;i++) {
        cin >> pass;
        if (pass == 1234) {
            cout << "Yes";
            break;
        }
        if (i==2) {
            cout << "your account is block";
            break;
        }
        else if (pass != 1234) {
            cout << "No!";
        }
    }
    return 0;
}