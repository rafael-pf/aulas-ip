#include <stdio.h>

int main(){
    int mat[2][3] = { {2, 5, -4},
                    {-2, 0, 3}};
    int *p;

    p = (int *) mat;
    int aux;

    // for(int i=0; i<6; i++){
    //     for(int j=0; j<6; j++){
    //         if(p[i]>p[j]){
    //             aux=p[i];
    //             p[i]=p[j];
    //             p[j]=aux;
    //         }
    //     }
    // }

    for(int i=0; i<6; i++){
        printf("vet[%d]=%d\n", i+1, p[i]);
        //p++;
    }
    



    return 0;
}
