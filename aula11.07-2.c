#include <stdio.h> // standart input output header
#include <stdlib.h>

int main(void){
    int tam;
    printf("Qual tamanho? "); scanf("%d", &tam);
    int *p = NULL;
    p = (int *) realloc(p, tam * sizeof(int));
    if(p == NULL) {
        printf("MAO DE VACA!!!\n");
        exit(1);
    }
    for(int i=0; i<tam; i++){
        p[i]=15;
    }
    free(p);


    return 0;
}
