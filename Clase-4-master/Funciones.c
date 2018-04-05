#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/** \brief Funcion generica para pedir un numero entero, y valida que este dentro del rango maximo y minimo
 *
 * \param mensaje char*
 * \param mensajeError char*
 * \param reintentos int
 * \param maximo int
 * \param minimo int
 * \param resultado int*
 * \return int
 *
 */
int getInt(char *mensaje, char* mensajeError, int reintentos, int maximo, int minimo, int *resultado)
{

    int retorno=-1;

    do
    {
        reintentos --;
        long valor;

        printf("%s", mensaje);
        scanf("%ld", &valor);
        if(valor >= minimo && valor<=maximo)
        {

            *resultado= (int)valor;
            retorno= 0;
            break;

        }

        printf("%s", mensajeError);

    }
    while(reintentos>=0);
    return retorno;
}

int getFloat(char *mensaje, char *mensajeError, int reintentos, float maximo, float minimo, float *resultado)
{

    int retorno=-1;

    do
    {

        reintentos--;
        float valor;

        printf("%s", mensaje);
        scanf("%f", &valor);
        printf("%f", valor);

        if(valor >= minimo && valor<=maximo)
        {
         *resultado= valor;
         retorno=0;
         break;
        }

        printf("%s", mensajeError);

    }while(reintentos>=0);
    return retorno;
}

int getChar(char *mensaje, char *mensajeError, int reintentos, char maximo, char minimo, char *resultado)
{

 int retorno=-1;


do{
        reintentos--;
        char caracter;

        printf("%s", mensaje);
        scanf("%c", &caracter);
        toupper(caracter);
        printf("%c", caracter);

        if(caracter >= maximo && caracter<= minimo){

        *resultado= caracter;
        retorno=0;
        break;

        }

        printf("%s", mensajeError);

}while(reintentos>=0);
return retorno;
}
