#include<stdio.h>

struct registro{
    char nome[30];
    char snome[30];
    int idade;
}cliente[2];

int main(){
    strcpy(cliente[0].nome, "Joao");
    strcpy(cliente[0].snome, "Bode");
    cliente[0].idade = 28;
    cliente[1] = cliente[0];

    printf("nome = %s  \nsobrenome = %s   \nidade = %d ", cliente[1].nome, cliente[1].snome, cliente[1].idade);
}
