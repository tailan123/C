#include<stdio.h>
#include<math.h>

    int main(){
        //Fazer um programa em C que leia 2 valores inteiros para duas vari�veis A e B,
        //   escreva os conte�dos das vari�veis na tela, e em seguida troque os conte�dos das duas vari�veis, exibindo novamente os seus conte�dos na tela

        int i1, i2, temp;
        scanf("%d", &i1);
        scanf("%d",&i2);

        temp = i1;
        i1 = i2;
        i2 = temp;

        printf("\n%d\n%d", i1, i2);


    return 0;
    }
