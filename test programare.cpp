#include <stdio.h>
#include <conio.h>

void citireMat(int a[10][10],int m, int n){
    printf("Introduceti elementele matricei");
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void removeValue(int a[10][10],int m,int n)
{
    int minim;
    for(int i=0;i<m;i++){
        minim=a[i][0];
        for(int j=0;j<n;j++){
            if (a[i][j]<minim) minim=a[i][j];
        }
        for(int j=0;j<m;j++){
           a[i][j]=a[i][j]-minim;
        }
            
    }
}
    


void afisareMat(int a[10][10],int m, int n){
    printf("Matricea modificata este:");
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
}
int main(){
    int a[10][10],m,n;
    printf("Introduceti dimensiunile matricei:");
    printf("\n");
    scanf("%d",&m);
    scanf("%d",&n);
    citireMat(a,m,n);
    removeValue(a,m,n);
    afisareMat(a,m,n);

}