#include<stdio.h>

int main(){
    float altura, base, area;
        printf("infrome a altura e a base do triangulo \n");
        scanf("%f %f", &altura, &base);
    area = (altura * base)/2;
        printf("A �rea do triangulo �: %.2f", area);

    return 0;
}
