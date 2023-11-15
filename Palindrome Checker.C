#include<stdio.h>
int main(){
    int i,n,p;
    char mot[n];
    printf("entrer le mot a verifier\n");
    scanf("%s",mot);
    while(mot[i]!='\0') i++;
    n=i;
    for(i=0;i<n/2;i++){
    if(mot[i]==mot[n-1-i]){
        p=-1;}
    else p++;}
        if(p==-1)
            printf("Palindrome");
        else
            printf("NON PALINDROME");}