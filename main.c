#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


int main()
{

/*int edad;

if(getInt("Edad? (0 a 135)", "\n\nEdad fuera del rango establecido\n\n", 2,  135, 0, &edad)==0){

printf("la edad es: %d", edad);
}
else{

printf("Ya ta hermano, chau");
}
*/

float radio;

if(getfloat("Ingrese el radio?", "\n\n Numero fuera de rango\n\n", 2, 32766, 0, &radio)==0)
    printf("el radio ingresado es: %.2f", radio);
else
printf("Ya ta hermano, chau");
return 0;
}


