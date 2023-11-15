#include <stdio.h>
#include<math.h>
#define _Pi 3.1415927
typedef struct{
    float x,y;}point;
typedef struct{
    point O;
    float r;
float peri;
float surf;}cercle;
int main(){
    point p;
    cercle c;
    printf("entrer les coo de centre");
    scanf("%f%f",&c.O.x,&c.O.y);
    printf("le rayon svp");
    scanf("%f",&c.r);
    printf("Centre:(%.2f,%.2f)\nRayon:%.2f\nPerimetre:%.2f\nsurface:%.2f",c.O.x,c.O.y,c.r,c.r*2*_Pi,c.r*c.r*_Pi);
    printf("\n entrer les coordonées d'un point:");
    scanf("%f%f", &p.x,&p.y);
    if(sqrt(pow((p.x-c.O.x),2)+pow((p.y-c.O.y),2))<=c.r)
        printf("\n (%.2f,%.2f) appartient au cercle de centre (%.2f,%.2f) et de rayon %.2f:",p.x,p.y,c.O.x,c.O.y,c.r);
    else
        printf("\n (%.2f,%.2f) n'appartient pas au cercle de centre C(%.2f,%.2f) et de rayon %.2f:",p.x,p.y,c.O.x,c.O.y,c.r);
}