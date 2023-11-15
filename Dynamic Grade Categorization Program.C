#include<stdio.h>
#include<stdlib.h>
// Saisie de la section
int main() {
    char choix = ' ';
    while (choix != 'q') {
        printf("TAPEZ 'c' pour ajouter une nouvelle section,sinon vous pouvez quitter en tapant 'q'): ");
        scanf(" %c", &choix);
        if (choix == 'q') {
            break;
        }
        int n;
        printf("nombre d'etudiants dans la section");
        scanf("%d", &n);
        int *notes;
        notes = (int *) malloc(n * sizeof(int));
        printf("Saisissez les notes des etudiants:\n");
        for (int i = 0; i < n; i++) {
            printf("T[%d]=", i + 1);
            scanf("%d", &notes[i]);}
        // Création des tableaux supérieur et inférieur
        int *A = NULL;
        int *B = NULL;
        int nbr_SUP = 0;
        int nbr_inf = 0;
        int i;
        for (i=0;i<n;i++) {
            if (notes[i] >= 10) {
                nbr_SUP++;
                A = (int*)realloc(A, nbr_SUP*sizeof(int));
                A[nbr_SUP-1] = notes[i];}
            else{
                nbr_inf++;
                B = (int*)realloc(B, nbr_inf*sizeof(int));
                B[nbr_inf-1] = notes[i];}}
        //affichage de tableau de depart+les deux tableuax resultats
        printf("\n-LES NOTES DES ETUDIANTS:\n");
        for(i=0;i<n;i++){
            printf("T[%d]=%d\n",i+1,notes[i]);}
        printf("\n-LES NOTES>=10\n");
        for(i=0;i<nbr_SUP;i++){
            printf("A[%d]=%d\n",i+1,A[i]);}
        printf("\n-LES NOTES<10\n");
        for(i=0;i<nbr_inf;i++){
            printf("B[%d]=%d\n",i+1,B[i]);}}}