/*
*
*	Título: TP 5 VECTORES
*	Consigna: 5. (x) Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla. Responda:
*	A. () ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos de repetición?
*	B. (x) Implemente la misma solución con ciclos de repetición, y responda
*	C. () ¿Cuántas líneas de código necesito en esta segunda versión?
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 3

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(int *array);
void output_data(int *array, int *acum);

int suma(int *array, int *acum);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int acum=0;

	int array[ARRAY_SIZE];

	/* Input de data */
	input_data(array);

	/* Procesamiento de data */
	suma(array, &acum);

	/* Output de data */
	output_data(array, &acum);
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

	/* Deinición de input_data */
void input_data(int *array) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("Ingresar un entero (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
		printf("***\n");
	}
}

	/* Definición de output_data */
void output_data(int *array, int *acum) {
	line();
	printf("Suma de elementos: %d\n", *acum);
	line();
}

	/* Deinición de suma() */
int suma(int *array, int *acum) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		*acum+=array[i];
	}
}
