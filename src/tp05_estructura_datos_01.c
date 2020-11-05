/*
*
*	Título: TP5 VECTORES 01
*	Consigna: 1. (x) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del
*	10,100,94,84,11
*	Alumno: 
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 5

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void output_data(int *array);
/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int array[ARRAY_SIZE] = {10, 100, 94, 84, 11};

	/* Input de data */
	/* Procesamiento de data */
	/* Output de data */
	output_data(array);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() - Imprime una línea de asteriscos */
void line(void) {
	int i=0;
	for(i=0; i<20; i++) {
		printf("***");
	}
	printf("\n");
}

	/* Definición de output_data() */
void output_data(int *array) {
	int i=0;
	line();
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	line();
}
