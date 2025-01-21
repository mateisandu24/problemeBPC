//pb 2 matrice

#include <stdio.h>
#include <malloc.h>
int** alocareMat(int m, int n)
{
    int** mat;
    mat=(int**)malloc(m * sizeof(int*));
    for(int i=0;i<m;i++){
        mat[i]=(int*)malloc(n * sizeof(int));
    }
    return mat;
}

void dezalocareMat(int** mat, int m)
{
    for(int i=0;i<m;i++){
        free(mat[i]);
       }
          free(mat);
}

void citireMat(int** mat, int m, int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            //SAU scanf("%d",&(*(*(mat+i)+j)))
            /// SAU scanf("%d",*(mat+i)+j)
        }
    }
}

void afisareMat(int** mat, int m, int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
            /// SAU printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
}

int main(){
    int** mat;
    int m=3, n=4;
    mat=alocareMat(m,n);
    citireMat(mat,m,n);
    afisareMat(mat,m,n);
    dezalocareMat(mat,m);
    printf("\n");
    printf("Succes!");
    return 0;
}