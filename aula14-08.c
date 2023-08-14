#include <stdio.h>

int main(){
    float vet[10]; //= {2.5, 4.5, -2, -34.78, 10};
    char nome[7] = {"Rafael"};
    int qtd=-1;
    FILE *fVet;
    if((fVet=fopen("vet.bin", "r"))!=NULL){
        //fwrite(nome, sizeof(char), 7, fVet);
        while(!feof(fVet)){
            qtd++;
            fread(&vet[qtd], sizeof(float), 1, fVet);
        }
        fclose(fVet);
        for(int i=0; i<qtd; i++){
            printf("vet[%d] = %.2f\n", i+1, vet[i]);            
        }
        printf("Tudo certo!\n");
    }
    else printf("Problema para abrir/criar arquivo\n");



    return 0;
}
