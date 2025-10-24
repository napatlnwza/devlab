#include <stdio.h>

int main() {
    for (int i=1;i>=0;i++) {
        int ans;
        scanf("%d",&ans);
        if (ans == -1) {
            break;
        }
        printf("%d ",ans);
    }
    return 0;
}