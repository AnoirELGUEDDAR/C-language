#include <stdio.h>
typedef struct {int j,m,an}DATE;
typedef struct{
    int nom[100];
    int prenom[100];
    DATE d;
    int formation[1];
    int redouble;
    int gr;}fiche;
int main(){
    fiche f;
    printf("LE NOM:");
  scanf("%s",f.nom);
  printf("LE PRENOM");
  scanf("%s",f.prenom);
  printf("\ndate de naiss (jj/mm/aaaa)\n");
    scanf("%d %d %d",&f.d.j,&f.d.m,&f.d.an);
    printf(" entrer formation\n");
    scanf("%s",&f.formation);
    do{
        printf("est-il redoublant ?si oui entrer 1 si non entrer 0");
        scanf("%d",&f.redouble);}while(f.redouble!=0 && f.redouble!=1);
    printf("entrer number de groupe");
    scanf("%d",&f.gr);
    printf("nom:%s\nprenom:%s\ndate de naissance:%d/%d/%d\nlaformation:%s\n",f.nom,f.prenom,f.d.j,f.d.m,f.d.an,f.formation);
    if(f.redouble==1)
        printf("redoublement:oui");
    else
        printf("\nredoublement:non");
    printf("\nle groupe de td:%d",f.gr);
    return 0;}