/*
*
*	Título: Nicolás Esteban Olmedo
*	Consigna: 1. Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo bubblesort u ordenamiento por burbujeo.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 6

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(int *array);
void output_data(int *array);

void bubblesort(int *array);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int array[ARRAY_SIZE];

	/* Input de data */
	input_data(array);

	/* Procesamiento de data */
	bubblesort(array);

	/* Output de data */
	output_data(array);
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

	/* Definición de input_data() */
void input_data(int *array) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("Ingresar enteros (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
	}
}

	/* Definición de output_data() */
void output_data(int *array) {
	line();
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	line();
}

	/* Definición de bubblesort() */
void bubblesort(int *array) {
	int i=0, j=0, aux=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		for(j=0; j<ARRAY_SIZE-i-1; j++) { /* Ojo acá */
			if(array[j]>array[j+1]) {
				aux = array[j];
				array[j] = array[j+1],
				array[j+1] = aux;
			}
		}
	}
}
