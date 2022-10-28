#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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

double calcolaDistanza(Punto a, Punto b){
     int c1r = abs((int) b.x -  (int)a.x);
     int c2r = abs((int) b.y- (int) a.y);
     double c1 = pow(c1r, 2);
     double c2 = pow(c2r, 2);
     return sqrt(c1 +c2);
}

double calcolaNorma(Punto a){
    Punto zero;
    zero.x = 0;
    zero.y = 0;
    return calcolaDistanza(a, zero);
}

double lunghezza(Punto linea[]){
   // int len = sizeof(linea) / sizeof(Punto);
    int i;
    double sum = 0;
    for(i = 0; i < 3 -1 ; i++){
        sum = sum + calcolaDistanza(linea[i], linea[i + 1]);
        printf("partial sum : %f \n", sum);
    }
    return sum;
}

int main(){
    Punto a;
    Punto b;
    Punto c;
    a.x = 0; a.y = 0;
    b.x = 3; b.y = 4;
    c.x = 0; c.y = 8;
    Punto line[3] = {a,b,c};
    printf("%f \n", lunghezza(line));
}


//sqrt((abs(a.x)+ abs(b.x))* (abs(a.x)+ abs(b.x)) + (abs(a.y)+ abs(b.y)) * (abs(a.y)+ abs(b.y)) );
