// 1.หาผลรวมตั้งแต่เลข 1 จนถึง n
#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d" ,&n);
    int sum=0;
    for (int i=1;i<=n;i++) {
        sum=sum+i;
    }
    printf("Sum is %d" ,sum);
}