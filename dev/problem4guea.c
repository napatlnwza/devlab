// 4.หาคำตอบ ตั้งแต่ 1-n โดยการยกกำลัง เช่น 1*1
#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d" ,&n);
    int sum=0;
    for (int i=1;i<=n;i++) {
        sum=sum+(i*i);
    }
    printf("Ans = %d" ,sum);
    return 0;
}