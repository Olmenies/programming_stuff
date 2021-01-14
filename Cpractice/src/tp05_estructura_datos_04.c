/*
*
*	Título: TP5 VECTORES 4
*	Consigna: 4. (x) Cree un array de char y escriba la palabra “Bienvenidos”. Responda:
	A. (x) ¿De cuantas posiciones deberá ser el vector?
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 12

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void output_data(char *array);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int i=0;
	char array[ARRAY_SIZE] = "Bienvenidos";
//	char array[] = "Bienvenidos";

	/* Input de data */
	/* Procesamiento de data */
//	for(i=0; i<ARRAY_SIZE; i++) {
//		printf("array[%d] = %c\n", i, array[i]);
//	}

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

	/* definicion de output_data() */
void output_data(char *array) {
	line();
	printf("%s\n", array);
	printf("\t A. ¿De cuantas posiciones deberá ser el vector? %d\n", ARRAY_SIZE);
	line();
}
