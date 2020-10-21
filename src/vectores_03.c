/*
*
*	Título: EJERCICIOS DE VECTORES 03
*	Consigna: Ingresar datos y cargar un vector de 10 elementos, imprimir:
*	A. () Cantidad de elementos del vector cuyo valor sea igual a 1
*	B. () Suma de los elementos del vector
*	C. () Porcentual que representa cada elemento sobre el total
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

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int cont_1=0, i=0;
	int array[ARRAY_SIZE];

	/* Input de data */
	/* Procesamiento de data */
	/* Output de data */
	line();
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
	int i;
	for(i=0;i<=20;i++) {
		printf("***");
		if(i==20)
			printf("\n");
	}
}
	
