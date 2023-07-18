#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;   
} Pessoa;


int main(){
   Pessoa pEst;
   strcpy (pEst, "Pedro Alvares");
   pEst.idade = 556;
   Pessoa *pDin;
   pDin = (Pessoa *) malloc (sizeof(Pessoa));
   strcpy (pDin->nome, "Pedro I"); //  Equivalente a strcpy((*pDin).nome, "Pedro I");
   pDin->idade = 596; // Equivalente a (*pDin).idade = 596;


    return 0;
}
