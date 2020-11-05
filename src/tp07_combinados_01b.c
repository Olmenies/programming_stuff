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
void pantalla_principal(void);

/* Función principal */
int main() {
clrscr();
	/* Declaraciones locales */
	int opcion=0;

	int array[ARRAY_SIZE] = {0};

	/* Menu */ //Preguntar ¿Debería estar esto en una función? -> Queda el main() vacío
	do {
		pantalla_principal(); // Preguntar sobre esto 
		scanf("%d", &opcion); // ¿Debería estar el scanf() en pantalla_principal()?
	
		switch(opcion) {
			case 1:
				/* Input de data */
				clrscr();
				input_data(array);
				clrscr();
				break;
			case 2:
				/* Procesamiento de data */
				clrscr();
				bubblesort(array);
				clrscr();
				break;
			case 3:
				/* Output de data */
				clrscr();
				output_data(array);
				clrscr();
				break;
			case 0:
				break;
			default:
				printf("Opción no válida.\n");
		}
	}while(opcion!=0);
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
	printf("\n\nTocá enter para continuar\n");
	line();
	getchar(); // Preguntar sobre esto
	getchar(); // ¿Otra manera de deshacerme del \n?
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

/* Definición de pantalla_principal() */
void pantalla_principal(void) {
	line();
	printf("\t1. Introducir valores.\n\t2. Ordenar valores.\n\t3. Mostrar valores.\n\t0. Salir\n");
	line();
	printf("Ingresar opción: ");
}
