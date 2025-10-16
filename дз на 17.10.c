#include <stdio.h>
#include <stdlib.h>
int prod(float** arr1,float** arr2,float** res,int a,int b,int c){

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
            res[i][j] = 0;
        }
    }
    
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            for (int l = 0; l < c; l++){
                res[i][l]+=arr1[i][j]*arr2[j][l];
            }
        }
    }
    return 0;
}


int main(){
    int n,m,k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    float** array1 = (float**)malloc(sizeof(float*) * n);
    for (int i = 0; i < n; ++i) {
        array1[i] = (float*)malloc(sizeof(float) * m);
    }
    
    float** array2 = (float**)malloc(sizeof(float*) * m);
    for (int i = 0; i < m; ++i) {
        array2[i] = (float*)malloc(sizeof(float) * k);
    }
    
    float** result = (float**)malloc(sizeof(float*) * n);
    for (int i = 0; i < n; ++i) {
        result[i] = (float*)malloc(sizeof(float) * k);
    }


    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%f",&array1[i][j]);
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<k;j++){
            scanf("%f",&array2[i][j]);
        }
    }
    prod( array1,array2,result,n,m,k);
    for (int i=0;i<n;i++){
        for (int j=0;j<k;j++){
            printf("%f ",result[i][j]);

        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) free(array1[i]);
    free(array1);
    for (int i = 0; i < m; i++) free(array2[i]);
    free(array2);
    for (int i = 0; i < n; i++) free(result[i]);
    free(result);
    return 0;
}

