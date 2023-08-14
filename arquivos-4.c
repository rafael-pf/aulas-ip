#include <stdio.h> 
#include <stdlib.h>

int main(){
    FILE *arq;
    int n[3];// = {10, 20, 30};
    char c;
    char string[100];

    arq = fopen("teste.bin", "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    // for(int i=0; i<3; i++){
    //     printf("Digite o numero n[%d]: \n", i+1);
    //     scanf("%d", &n[i]);
    // }
    // fwrite(n, sizeof(int), 3, arq);

    // fread(n, sizeof(int), 3, arq);
    // for(int i=0; i<3; i++){
    //     printf("n[%d] = %d\n", i+1, n[i]);
    // }

    fclose(arq);
    return 0;
}
