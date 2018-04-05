#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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


/*float radio;

if(getFloat("Ingrese el radio?", "\n\n Numero fuera de rango\n\n", 3, 32766.0000, 0.00000, &radio)==0)

   printf("el radio ingresado es: %f", radio);

*/

char caracter;

if(getchar("Ingrese una letra de la a a la Z: ", "Caracter no valido", 2, 'A', 'Z', &caracter)==0)
{

    printf("La letra es: %c", caracter);
}
    else{

    printf("Ernesto Ayudame, yo se que podes");
    }
return 0;
}


