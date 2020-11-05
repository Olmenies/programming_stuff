/*
*
*	Título: TP5 VECTORES 02
*	Consigna: (x) Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego muéstrelo de manera inversa.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 10

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(int *array);
void output_data(int *array);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int array[ARRAY_SIZE];

	/* Input de data */
	input_data(array);
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
		printf("Ingresar un entero (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
		printf("***\n");
	}
}

	/* Definición de output_data() */
void output_data(int *array) {
	line();
	int i=0;
	for(i=ARRAY_SIZE; i>=0; i--) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	line();
}
