#ifndef DISP_H
#define DISP_H


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define LONGITUD_CLAVE 30
#define LONGITUD_SINONIMOS 300
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

typedef struct entrada_ {
	int ocupada;
	char clave [LONGITUD_CLAVE];
	char sinonimos [LONGITUD_SINONIMOS];
} entrada;
typedef int colisiones;
typedef int pos;

typedef struct {
	char clave [LONGITUD_CLAVE];
	char sinonimos [LONGITUD_SINONIMOS];
} item;

typedef entrada *tabla_cerrada;

int dispersionA(char *, int);
int dispersionB(char *, int);
int leer_sinonimos(item[]);


#endif
