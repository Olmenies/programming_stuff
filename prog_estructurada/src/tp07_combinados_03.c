/*
*
*	Título: TP 7 EJERCICIOS COMBINADOS 03
*	Consigna: Ingresar 15 datos en un vector y ordenarlos de manera descendiente.
*	Alumno: Nicolás Esteban Olmedo
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
void pausa(void);

void pantalla_00(void);

void input_data(int *array);
void bubblesort(int *array);
void output_data(int *array);;

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int opcion=0;

	int array[ARRAY_SIZE] = {0};
	
	/* Menu */
	do {
		clrscr();
		pantalla_00();
		printf("Ingresar una opcion:");
		scanf("%d", &opcion);
		switch(opcion) {
			case 1:
				/* Input de data */
				input_data(array);
				pausa();
				break;
			case 2: 
				/* Procesamiento de data */
				bubblesort(array);
				pausa();
				break;
			case 3:
				/* Output de data */
				output_data(array);
				pausa();
				break;
			case 0: 
				break;
			default:
				printf("Opción no válida\n");
				pausa();
				break;
		}
	} while(opcion != 0);
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

	/* Definición de pausa() */
void pausa(void) {
	printf("Ingresá enter para continuar...");
	getchar();
	getchar();
}

	/* Definición de input_data() */
void input_data(int *array) {
	int i=0;
	for(i=1; i<ARRAY_SIZE; i++) {
		printf("Ingresar un valor (%d restantes):", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
	}
}

	/* Definición de bubblesort() */
void bubblesort(int *array) {
	int i=0, j=0, aux=0;
	printf("Bubblesort!\n");
	for(i=1; i<ARRAY_SIZE; i++) {
		for(j=1; j<ARRAY_SIZE-i; j++) {
			if(array[j] < array[j+1]) {
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
}
	
	/* Definición de output_data() */
void output_data(int *array) {
	int i=0;
	for(i=1; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}

/* Pantallas */
void pantalla_00(void) {
	line();
	printf("\t1. Ingresar valores\n\t2. Ordenar valores\n\t3. Mostrar valores\n\n\t0. Salir.\n");
	line();
}
