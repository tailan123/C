#include<stdio.h>
#include<string.h>

struct registro{
    char nome[30];
    char snome[30];
    int idade;
}cliente[3];

int main(){
    char nomeax[30];
    scanf("%s", nomeax);
    strcpy(cliente[0].nome, nomeax);
    strcpy(cliente[0].snome, "Alves");
    cliente[1].idade = 18;
    cliente[2] = cliente[0];
    cliente[3] = cliente[1];

    printf("O nome de %s  e o seu sobrenome %s\n ", cliente[2].nome, cliente[2].snome);
    printf("%d de Idade", cliente[3].idade);
}
