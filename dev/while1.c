#include <stdio.h>

int main(){
    int people;
    printf("Input  N people : ");
    scanf("%d" ,&people);
    float bmi=0;
    float w,h;
    int i=1;
    while (i<=people) {
        printf("Input Weight : ");
        scanf("%f" ,&w);
        printf("Input Hight : ");
        scanf("%f" ,&h);
        bmi=bmi+(w/(h*h));
        i++;
    }
    printf("%.2f ",bmi/people);
}