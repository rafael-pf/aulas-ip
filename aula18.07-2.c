#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nomeAl[50];
    int posAta;   
} Aluno;


int main(){
   Aluno *sala = NULL;
   char nome[50];
   int iAluno=0;
   do {
    printf("Qual o nome do aluno? ");
    scanf(" %49[^\n]", nome);
    if(nome[0]!='.') {
        sala = (Aluno *) realloc(sala,  (iAluno + 1) * sizeof(Aluno));
        if(sala==NULL) {
            printf("Problema de alocacao\n");
            exit(1);
        }
        printf("Qual a posicao na ata? ");
        scanf("%d", &(sala[iAluno].posAta));
        iAluno++;
    }
   } while(nome[0]!='.');
   free(sala);


    return 0;
}
