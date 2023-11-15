#include <stdio.h>
#include<string.h>
#include"nomfichier.h"
int fct (char T[]){
    strlwr(T);
    int k,p=0,l;
    char voyelles[6]={'a','e','i','o','u','y'};
    l=strlen(T)-1;
    for(k=0;k<l;k++){
            if(T[k]=='a' T[k]=='o'  T[k]=='u'  T[k]=='o'  T[k]=='i' || T[k]=='y'){
            p++;}}
return p;}
int main(){
    int i;
    char k[20];
    printf("entrer mot");
    gets(k);
    printf("%d",fct(k));}