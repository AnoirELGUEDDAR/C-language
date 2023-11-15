#include <stdio.h>
#include <string.h>
typedef struct{char nomprod[100];float pu;int qv}vente;
//FUNCTION 1
 void SAISIE(vente *T,int n){
    int i;
    for (i=0;i<n;i++) {
        printf("saisie vente %d : \n", i + 1);
        printf("\tsaisie nom produit : ");
        scanf("%s", T[i].nomprod);
        printf("\tsaisie prix unitaire : ");
        scanf("%f", &T[i].pu);
        printf("\tsaisie quantit vendue : ");
        scanf("%d", &T[i].qv);
    }}  //FIN
    // FUNCTION 2
    void CALCUL(vente *T,int n){
     int i,s=0;
     for(i=0;i<n;i++){
         s=s+T[i].pu*T[i].qv;}
printf("Le chiffre d'affaire = %f\n",s);}
       //FIN
     //FUNCTION 3
     void MAX(vente *T,int n){
     int i,j,p;
     for(i=1;i<=n;i++){
         for(j=0;j<n;j++){
             if(T[j].qv<=T[i].qv)
                 p=i;}}
     printf("le nom de produit max est %s",T[p].nomprod);
     printf("sa quantite est %.2f",T[p].qv);
     printf("son prix d'unit est %d",T[p].pu);}  //FIN
     //FUNCTION 4
     void afficheinfoprod(vente *T,int n){
     char k[20];
     int i,tmp=-1;
     printf("entrer le nom de recherche");
     scanf("%s",k);
     for(i=0;i<n;i++){
        if (strcmp(T[i].nomprod,k)==0)
            tmp=i;break;}
         if(tmp==-1) printf("Le produit %s n'existe pas!!\n",T[i].nomprod);
         else{
             printf("Les informations du produit recherche sont :\n");
             printf("Nom produit = %s\t",T[tmp].nomprod);
             printf("prix unitaire = %.2f\t",T[tmp].pu);
             printf("quantité vendue = %d\n",T[tmp].qv);
         }}
         //FIN
     //FUNCTION 5
     void affichevente(vente *T,int n){
     int i;
     for(i=0;i<n;i++){
         if(T[i].qv!=0){
         printf("le nom de produit %d %s\t",i+1,T[i].nomprod);
         printf("prix unitaire = %.2f\t",T[i].pu);
         printf("quantit vendue = %d\n",T[i].qv);}}}   //FIN
             int main(){
                 int n,op;
                 printf("donner le nombre des produits : ");
                 scanf("%d",&n);
                 vente T[n];
                 SAISIE(T,n);

                 do{
                     printf("0 : pour quitter\n");
                     printf("1 : pour calculer le chiffre d'affaire\n");
                     printf("2 : pour afficher toutes le ventes\n");
                     printf("3 : pour rechercher\n");
                     printf("4 : pour afficher le produit max\n");
                     scanf("%d",&op);
                     switch(op){
                         case 1 : CALCUL(T, n); break;
                         case 2 : affichevente(T, n); break;
                         case 3 : afficheinfoprod(T, n); break;
                         case 4 : MAX(T, n); break;
                     }
                 }while(op!=0);
                 return 0;}