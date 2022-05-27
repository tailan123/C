#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>

#define TAM 10

typedef struct {
    int nota;
    int id;
}dados;


int calcula_maior(dados aluno[TAM]){
    int maior = INT_MIN, i;
    for(i = 0; i < TAM; i++){
        if(aluno[i].nota > maior){
            maior = aluno[i].nota;
        }

    }
     printf("Maior nota: %d", maior);
    return maior;
}

/*int notas_idk(int(vet[TAM])){

    int i, notas;
    for(i = 0; i < TAM; i++){
        notas = vet[i];
        printf("\tNota: %d  E  identidade: %d\n", notas, i);
    }
return notas;
}
int grande(int(vet[TAM])){
    int maior = INT_MIN, i;
    for(i = 0; i < TAM; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
}
    printf("Maior nota: %d", maior);
return maior;
}
int notas_repetidas_estrutura(int(vet[TAM])){
    int repetidas, i;
    for(i = 0; i < TAM; i++){
        if()
    }
}
*/

int main(){
   /* int vet[TAM], i;
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        vet[i] = rand()%10;
     }
    notas_idk(vet);
    grande(vet);
*/
    dados aluno[TAM];

    int i;
    for(i = 0; i < TAM; i++){ //identificação do aluno
        aluno[i].id = i + 1;
        aluno[i].nota = rand()%10;
        printf("\tNota: %d   E   identidade: %d\n", aluno[i].nota, aluno[i].id);
    }


    calcula_maior (aluno);


}
