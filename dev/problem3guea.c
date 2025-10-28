// 3.แสดงเลข คี่ ตั้งแต่ 1 จนถึง n
#include <stdio.h>

int main() {
    int a;
    printf("Enter n : ");
    scanf("%d" ,&a);
    for (int i=0;i<=a;i++) {
        if (i % 2 != 0) {
            printf("%d\n" ,i);
        }
    }
    return 0;
}