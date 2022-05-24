#include<stdio.h>
#include<string.h>

struct registro{
    char nome[20];
    char snome[21];
    int idade;
};
int main(){
struct registro cliente[3];
    strcpy(cliente[0].nome, "PIRO");
    strcpy(cliente[0].snome, "Pirlo");
    cliente[0].idade = 20;
    cliente[1] = cliente[0];

    printf("O nome de %s  e o seu sobrenome %s\n ", cliente[1].nome, cliente[1].snome);

}
