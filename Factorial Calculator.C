#include<stdio.h>
int fact(int n){
    int i,F=1;
    for(i=1;i<=n;i++){
        F=F*i;}
    return F;}
    int main(){
        int n;
        printf("entrer un nombre n");
        scanf("%d",&n);
        printf("%d! =%d",n,fact(n));}