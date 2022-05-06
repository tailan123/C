#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>
// Maior e menor valor inteiro

#define TAM 4

int main(){
    int matz[TAM], i;
    int max1, max2;
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        matz[i] = rand()%20;
    }
     max1 = max2 = INT_MIN;

     for (i = 0; i < TAM; i++){
        printf(" %d\t", matz[i]);

        if (matz[i] > max1){
            max2 = max1;
            max1 = matz[1];
        }
        else if (matz[i] > max2 && matz[1] < max1)
            max2 = matz[1];
     }
    printf("\n%d", max1);
    printf("\n%d", max2);
}
// INT_MIN = menor valor informado - Macro, adicionado no include;
