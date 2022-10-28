#include <math.h>
#include <stdio.h>
typedef struct{
    float x;
    float y;
}Punto;

void stampaPunto(Punto p){
    printf("(%f ; %f)", p.x, p.y);
}

Punto acquisisciPunto(){
    float a, b;
    printf("Inserisci x: ");
    scanf("%f", &a);
    printf("Inserisci y: ");
    scanf("%f", &b);
    Punto p;
    p.x = a;
    p.y = b;
    return p;
}

double calcolaDistanza(Punto a, Punto b);

float calcolaNorma();

int main(){
    Punto k;
    Punto b;
    k.x = 1;
    k.y = 3;
    b = acquisisciPunto();
    stampaPunto(k);
    stampaPunto(b);
    printf("\n%f", calcolaDistanza(k, b));
}

double calcolaDistanza(Punto a, Punto b){
    double c = sqrt(a.x);
    return c;
}

//sqrt((abs(a.x)+ abs(b.x))* (abs(a.x)+ abs(b.x)) + (abs(a.y)+ abs(b.y)) * (abs(a.y)+ abs(b.y)) );

