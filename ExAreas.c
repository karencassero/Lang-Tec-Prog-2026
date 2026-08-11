#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]){
//área do círculo

       float raio, area, raioQuadrado;
       
       printf ("Insira o valor de R: \n");
       scanf ("%f", &raio);
       
       raioQuadrado = raio*raio;
       area = pi * raioQuadrado;
       
       printf ("A area do círculo de raio %f = %f, raio, area");
       
//área do trapézio descedente

    float B, b, h, areaT;
    
    printf ("Insira B: \n");
    scanf ("%f", &B);
    
    printf ("Insira b: \n");
    scanf ("%f", &b);
    
    printf ("Insira h: \n");
    scanf ("%f", &h);
    
    area = ((B+b)*h)/2;
    
    printf("Area do trapezio descendente igual a %f", areaT);

  return 0;
}
