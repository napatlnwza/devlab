#include <stdio.h>

int main() {
    // int  main ไม่ต้องสนใจ
    int n;
    printf("Enter Number : ");
    scanf("%d" ,&n);
    for (int i=1;i<=12;i++) { // for เงื่อนไขเป็นจริงถึงจะ ex. i=1 n=5 ก็จะเข้าloop for
        printf("%d x %d = %d\n" ,n,i,i*n);
    }
    return 0;
}