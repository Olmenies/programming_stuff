/*
*
*	Título: TP 7 COMBINADOS 02
*	Consigna: 2. Cree un programa para ingresar 10 números en un vector y luego que permita introducir un número para realizar una búsqueda. Permita que el operador del programa elija que tipo de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial).
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 9 

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	/* Input de data */
	/* Procesamiento de data */
	/* Output de data */
	line();
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
