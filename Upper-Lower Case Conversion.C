#include<stdio.h>
#include<string.h>
void convert(char T1[],char T2[]){
    int i,n;
    int d='a'-'A';
    n=strlen(T1);
    for(i=0;i<n;i++){
        if(T1[i]>='a' && T1[i]<='z') T2[i]=T1[i]-d;
        else if(T1[i]>='A' && T1[i]<='Z') T2[i]=T1[i]+d;
        else T2[i]=T1[i];}
    T2[n]='\0';}
int main(){
    char T1[100],T2[100];
    printf("entrer phrase");
    gets(T1);
    convert(T1,T2);
    printf("le resultat est %s",T2);}