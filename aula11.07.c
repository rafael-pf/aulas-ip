#include <stdio.h> // standart input output header
#include <stdlib.h>

int main(void){
    int i, tam;
    int *pont;

    printf("Qual o tamanho que voce quer? "); scanf("%d", &tam);
    pont = (int *) malloc(tam * sizeof(int)); //int pont[10];
    if(pont != NULL){

        for(i=0; i<tam; i++){
            pont[i] = 10*i;
            printf("pont[%d]=%d\n", i+1, pont[i]);
        }

        free(pont);
    }
    
    //for(i=0; i<10; i++)
    //   pont[i] = 10;

    return 0;
}
