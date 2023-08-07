#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    arq = fopen("/home/CIN/rpf/Documents/teste.txt", "rt");
        if(arq==NULL){
            printf("Problema de abertura do arquivo!\n");
            exit(1);
        }
        //trabalhar com o arquivo
        
        
        
        char texto[100];
        while(!feof(arq)){
            fscanf(arq, " %99[^\n]\n", texto);
            printf("texto: %s\n", texto);
        }


       
    fclose(arq);
    return 0;
}
