#include<stdio.h>
#include<stdlib.h>
int *f(int T[],int n,int *nn){
    int* M = (int*) malloc(n * sizeof(int));
    int i,j,ns=0;
    for(i=0;i<n;i++){
        int p=0;
        for(j=0;j<n;j++){
        if(T[i]==M[j]){
            p=1;
        break;}}
        if(p==0){
            M[ns]=T[i];
            ns++;}}
            M = (int*)realloc(M, ns*sizeof(int));
            *nn=ns;
    return M;}
int main() {
    int n,nn;
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i < n; i++) {
        printf("\nT[%d]= ",i+1);
        scanf("%d",&T[i]);}
    int* M = f(T, n,&nn);
    printf("nouveau Tableau : ");
    for (int i = 0; i < nn; i++) {
        printf("%d ", M[i]);}
    printf("\n");
    free(M);
    return 0;
}