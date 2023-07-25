#include <stdio.h>

float maior2(float a, float b){
    return (a>b)?a:b;   
}

void printfMaior(float v){
    printf("Maior = %.2f\n", v);
}

int main(){
    float x, y, z;
    printf("x, y e z? ");
    scanf("%f %f %f", &x, &y, &z);
    printfMaior(maior2(maior2(x,y),z));//printf("Maior = %.2f\n", maior2(maior2(x,y), z));
    return 0;
}
