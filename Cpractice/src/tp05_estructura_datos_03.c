/*
*
*	Título: TP5 VECTORES 03 
*	Consigna: 3. (x) Cree una matriz de enteros de 3 x 3. Inicialícela en base a la siguiente tabla:
*		100 74 99
*		11 36 68
*		23 9 81
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_X 3
#define ARRAY_Y 3

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void output_data(int matriz[ARRAY_X][ARRAY_Y]);

/* Función principal */
int main () {
	clrscr();
	/* Declaraciones locales */
	/* Input de data */
	int matriz[ARRAY_X][ARRAY_Y] = {
		{100, 74, 99},
		{11, 36, 68},
		{23, 9, 81}
	};

	/* Procesamiento de data */
	/* Output de data */
	output_data(matriz);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() */
void line(void) {
	int i=0;
	for(i=0; i<=20; i++) {
		printf("***");
	}
	printf("\n");
}

	/* output_data() */
void output_data(int matriz[ARRAY_X][ARRAY_Y]) {
	int ix=0, iy=0;
	for(iy=0; iy<ARRAY_Y; iy++) {
		for(ix=0; ix<ARRAY_X; ix++) {
 			printf("%d\t", matriz[ix][iy]);
		}
		printf("\n");
	}
}
