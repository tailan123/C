#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, delta, x1, x2;
        printf(" Informe os valores de a, b e c: \n");
        scanf("%f %f %f", &a, &b, &c);
    delta = ((b*b) - (4 * a *c));
    if(delta >= 0){
        x1 = (( -b + sqrt(delta))/2*a);
        x2 = (((-b - sqrt(delta)))/2*a);
        printf("As raizes sao: %.2f e %.2f \n", x1,x2);
}else{
        printf(" Nao ha valor real");
}


    return 0;
}
