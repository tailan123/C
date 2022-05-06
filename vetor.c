#include<stdio.h>
#include<time.h>

#define LIN 3
#define COL 3
int main(){
    int mat[LIN][COL];
    srand(time(NULL));
    for (int i = 0; i < LIN; i++){
            for (int k = 0; k < COL; k++){
                mat[i][k] = rand()%10;
                printf("\t%d", mat[i][k]);
            }
            printf("\n\n");
   }

}
