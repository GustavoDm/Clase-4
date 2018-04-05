#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int getInt(char *mensaje, char *mensajeError, int reintentos, int maximo, int minimo, int *resultado);

float getFloat(char *mensaje, char *mensajeError, int reintentos, int maximo, int minimo, float *resultado);

int getChar(char *mensaje, char *mensajeError, int reintentos, char maximo, char minimo, char *resultado);
#endif // FUNCIONES_H_INCLUDED
