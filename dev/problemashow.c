#include <stdio.h>

int main() {
    // int main ไม่ต้องสนใจ
    int count=0; // นับตัวอักษร
    char ch;
    for (int i=1;ch!='x';i++) {
        printf("Enter Alphabet : ");
        scanf(" %c",&ch);
        if (ch == 'x') {
            break;
        }
        if (ch >= 'A' && ch <= 'Z') {
            count++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            count++;
        }
    }
    printf("Ans = %d" ,count);
    return 0; // ไม่ต้องสนใจ
}