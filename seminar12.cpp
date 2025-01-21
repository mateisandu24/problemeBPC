#include <conio.h>
#include <stdio.h>

void citireMat(int a[10][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void afisareMat(int a[10][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void verif(int a[10][10],int m, int n, int vectCt[10], int* count){
    int ok=0;
    (*count)=0;
    for(int i=0;i<m;i++){
        ok=0;
        for(int j=1;j<n-1;j++){
            if (a[i][j]!=a[i][j+1])ok=1;
        }
        if (ok==0){
            vectCt[*count]=i;
            (*count)++;
        }
        
    }
    for(int i=0;i<*count;i++)
    {
        printf("vectCt[%d]=%d",i,vectCt[i]);
        printf("\n");
    }
}
void egalZero(int a[10][10],int m, int n){
    int ok=0;
    for(int j=0;j<n;j++){
        ok=0;
        for(int i=0;i<m;i++){
            if (a[i][j]!=0)ok=1;
        }
        if (ok==0){
            printf("In ziua %d nu s-au inregistrat vanzari",++j);
            printf("\n");
        }
    }
}
int main()
{
    int a[10][10],m,n;
    int vectCt[10];
    int count;
    scanf("%d",&m);
    scanf("%d",&n);
    citireMat(a,m,n);
    verif(a,m,n,vectCt,&count);
    egalZero(a,m,n);

}