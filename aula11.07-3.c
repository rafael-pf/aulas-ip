#include <stdio.h> // standart input output header
#include <stdlib.h>

int main(void){
    int *vet=NULL, tam=0, num;
    do{
        printf("Digite um numero: "); scanf("%d", &num);
        if(num>0){
            vet = (int *) realloc(vet, (tam+1) * sizeof(int));
            if(vet!=NULL) vet[tam++] = num;
            else num=-1;
        }
    }while (num>0);
    free(vet);
    return 0;
}
