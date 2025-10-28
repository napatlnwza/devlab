// 2.แสดงเลข คู่ ตั้งแต่ 1 จนถึง n
#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d" ,&n);
    for (int i=0;i<=n;i++) {
        if (i % 2 == 0) {
            printf("%d\n" ,i);
        }
    }
    return 0;
}