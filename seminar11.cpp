//alocare dinamica: memorie, citire, afisarea, dezalocare etc

#include <stdio.h>
#include <malloc.h>

int* alocareVect(int m)
{
    int* p;
    p=(int*)malloc(m*sizeof(int));
    return p;
}

void citireVect(int* v, int m){
    for(int i=0;i<m;i++){
        scanf("%d",&v[i]);
        //SAU scanf ("%d",&(*(v+i)));
        //sau scanf("%d", v+ i);
    }
}

void afisareVect(int* v, int m){
    for(int i=0;i<m;i++){
        printf("%d ", v[i]);
        //sau printf("%d ",*(v+i));
    }
    printf("\n");
}

int main()
{
    int*v;
    int m;
    scanf("%d",&m);
    v=alocareVect(m);
    citireVect(v,m);
    afisareVect(v,m);
    free(v); //DEZALOCARE
    return 0;
}