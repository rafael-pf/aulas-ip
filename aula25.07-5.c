#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float pReal, pImag;
} Complexo;

Complexo readC(){
    Complexo c;
    printf("parte real: ");
    scanf("%f", &c.pReal);
    printf("parte imag: ");
    scanf("%f", &c.pImag);
    return c;
}

Complexo addC(Complexo a, Complexo b){
    Complexo t;
    t.pReal = a.pReal + b.pReal;
    t.pImag = a.pImag + b.pImag;
    return t;
}

void printC(Complexo c){
    printf("%.2f %c %.2fi\n", c.pReal, c.pImag>=0?'+':'-', c.pImag);
}

int main(){
    Complexo c1, c2, cRes;
    c1 = readC();
    printC(c1);
    c2 = readC();
    printC(c2);
    printC(addC(c1, c2));
    return 0;
}
