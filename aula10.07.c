#include <stdio.h>

int main(){
    int x=10, y=15; //x sinonimo de endereco de memoria
    int *pQualquerInt = &x;

    *pQualquerInt= -10; //x = -10;     

    printf("x= %d\n", x);

    pQualquerInt = &y;
    *pQualquerInt = 10;
    printf("y= %d\n", y);   

    return 0; 
}
