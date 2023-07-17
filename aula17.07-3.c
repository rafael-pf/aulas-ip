#include <stdio.h>

int main(){
    int **mat, i, j;
    
    mat = (int **) malloc(2 * sizeof(int *));
    if(mat!=NULL){
        for(i=0; i<2; i++){
            mat[i] = (int *) malloc(3 * sizeof(int));
            if(mat[i]==NULL) exit(1);
        }
        //matriz existe pro complexo
        for(i=0; i<2; i++)
            for(j=0; j<3; j++)
                mat[i][j] = i+j; 
        for(i=0; i<2; i++) free(mat[i]);
        free(mat);
    }
    return 0;
}
