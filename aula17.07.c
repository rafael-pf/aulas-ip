#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p=NULL, *pAux, num, tam=0, i=0;
    do {
        printf("Digite um numero (se 0 ou negativo, para): ");
        scanf("%d", &num);
        if(num>0){
            pAux = p;
            p = (int *) realloc(pAux, (tam + 1) * sizeof(int)); // realloc (NULL, t) == malloc(t)    
            if(p == NULL) {
                printf ("Problema de alocacao de memoria\n"); 
                exit(1);
            }    
            p[tam++] = num;               
        }
    } while(num>0);
    

    for(i=0; i<tam; i++){
        printf("%d\n", p[i]);
    }

    free(p);
    return 0;
}
