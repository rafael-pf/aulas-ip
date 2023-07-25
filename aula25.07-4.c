#include <stdio.h>
#include <stdlib.h>
int *preenche(int tam){
    int *firmeza= (int*) malloc(tam*sizeof(int));
    if(firmeza==NULL) {printf("deu ruim fml"); exit(1);}
    for(int i=0; i<tam; i++) scanf("%d", &firmeza[i]);
    return firmeza;
}

int  main(){
    int *vet;
    int b;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &b);
    vet = preenche(b);
    for(int i=0; i<5; i++){
        printf("%d ", *(vet+i));
    }
    free(vet);
    return 0;
}
