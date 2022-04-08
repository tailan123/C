#include<stdio.h>
#include<math.h>

int main(){
   float prova1, prova2, prova3, media;
    scanf("%f", &prova1);
    scanf("%f", &prova2);
    scanf("%f", &prova3);
    media = (prova1 + prova2 + prova3)/3;
    if( media < 5){
        printf("%.2f Reprovado", media);
    }
    else{
        printf("Aprovado");
    }
return(0);}
