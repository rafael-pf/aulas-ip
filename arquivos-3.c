#include <stdio.h> 
#include <stdlib.h>

int main(){
    FILE *arq;
    int n;
    char c;
    char string[100];

    arq = fopen("teste.txt", "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // printf("Digite um numero: \n");
    // scanf("%d", &n);
    // fprintf(arq, "%d", n);

    // fscanf(arq, "%d", &n);
    // printf("leitura do arquivo: %d\n", n);

    // printf("Digite um caractere: \n");
    // scanf("%c", &c);
    // fputc(c, arq);

    // c = fgetc(arq);
    // printf("leitura do arquivo: %c\n", c);

    // printf("Digite uma string: \n");
    // scanf(" %[^\n]", string);
    // fputs(string, arq);

    // fgets(string, 100, arq);
    // printf("leitura do arquivo: %s\n", string);

    fclose(arq);
    return 0;
}
