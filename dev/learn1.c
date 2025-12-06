#include <stdio.h>


// สามเหลี่ยมคว่ำ
int main() {
    int n;
    printf("Input N:");
    scanf("%d" ,&n);
    for (int i=n;i>=0;i--) {
        for (int j=i;j>=0;j--) {
            printf("*");
        }
        printf("\n");
    }
}



// พีรามิด
// int main() {
//     int n;
//     printf("Input N: ");
//     scanf("%d" ,&n);
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++) {
//             printf("*");
//         }
//         for (int j=1;j<=i-1;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }