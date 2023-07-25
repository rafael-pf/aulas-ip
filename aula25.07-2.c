#include <stdio.h>

void swap(float *x, float *y){
    float t;
    t = *x;
    *x = *y;
    *y = t;
}

int main(){
    float x, y, t;
    x = 10; y = 20;
    swap(&x, &y);
    printf("x = %.2f, y = %.2f\n", x, y);
    return 0;
}
