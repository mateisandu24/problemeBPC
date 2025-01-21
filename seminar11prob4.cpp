//matrice ce repr vanzarile zilnice a m produse in n zile

void amplitudineZi(int** mat,int n, int* VectAmplZi)
{
    int max,min;
    for(int j=0;j<n;j++){
        max=mat[0][j];
        min=max;
        for(int i=0;i<m;i++){
            if (mat[i][j]>max){
                max=mat[i][j];
            }
            if (mat[i][j]<min){
                min=mat[i][j];
            }
        }
         VectAmplZi[j]=max-min;
    }
       
}