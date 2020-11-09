/*
*
*	Título: TP 7 COMBINADOS 02
*	Consigna: 2. Cree un programa para ingresar 10 números en un vector y luego que permita introducir un número para realizar una búsqueda. Permita que el operador del programa elija que tipo de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial).
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
void pausa(void);

void pantalla_00(void);
void pantalla_01(void);

void input_data(int *array);
void output_data(int *array);

void bubblesort(int *array);
void busqueda_binaria(int *array, int valor, int *flag, int *posicion);
void busqueda_secuencial(int *array, int valor, int *flag, int *posicion);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int opcion=0, valor=0, flag=0, bubble_flag=0, posicion=0;

	int array[ARRAY_SIZE] = {0};
	/* Menu */
	do{
		clrscr();
		pantalla_00();
		printf("Ingresar opción: ");
		scanf("%d", &opcion);

		switch(opcion) {
			case 1:
				/* Input de data */
				clrscr();
				input_data(array);
				pausa();
				break;
			case 2:
				clrscr();
				bubblesort(array);
				output_data(array);
				pausa();
				break;
			case 3: 
				do {
					clrscr();
					pantalla_01();
					printf("Ingresar opción: ");
					scanf("%d", &opcion);

					switch(opcion) {
						case 1:
							printf("Ingresar valor a buscar: ");
							scanf("%d", &valor);
							busqueda_binaria(array, valor, &flag, &posicion);
							if(flag == 0) {
							printf("Valor %d no encontrado\n", valor);
							} else {
							printf("Valor %d encontradon en la posicion %d\n", valor, posicion);
							}
							flag = 0;
							posicion = 0;
							pausa();

							break;
						case 2:
							printf("Ingresar valor a buscar: ");
							scanf("%d", &valor);
							busqueda_secuencial(array, valor, &flag, &posicion);
							if(flag == 0) {
							printf("Valor %d no encontrado\n", valor);
							} else {
							printf("Valor %d encontradon en la posicion %d\n", valor, posicion);
							}
							flag = 0;
							posicion = 0;
							pausa();
							break;
						case 9:
							break;
						default:
							printf("Opción no válida\n");
							break;
					}
				} while(opcion != 9);
				break;
			case 4:
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
	printf("\nIngresar enter para continuar...");
	getchar();
	getchar();
}

	/* Definición de input_data() */
void input_data(int *array) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("Ingresar un valor (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
	}
}

	/* Deinición de output_data() */
void output_data(int *array) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i,  array[i]);
	}
}

	/* Definición de bubblesort() */
void bubblesort(int *array) {
	printf("Bubblesort!\n");
	int i=0, j=0, aux=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		for(j=0; j<ARRAY_SIZE-i-1; j++) {
			if(array[j] > array[j+1]) {
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
}

	/* Definición de busqueda_binaria() */
void busqueda_binaria(int *array, int valor, int *flag, int *posicion) {
	printf("Busqueda binaria!\n");
	int centro, inferior=0, superior=ARRAY_SIZE;
	while(inferior <= superior) {
		centro = (superior-inferior)/2;

		if(array[centro] == valor) {
			*flag = 1;
			*posicion = centro;
			break;

		} else if(valor < array[centro]) {
			/* Entonces está a la izquierda */
			inferior = centro+1;

		} else if(valor > array[centro]) {
			/* Entonces está a la derecha */
			superior = centro-1;
		}
	}
}

	/* Definición de busqueda_secuencial */
void busqueda_secuencial(int *array, int valor, int *flag, int *posicion) {
	int i=0;

	for(i=0; i<ARRAY_SIZE; i++) {
		if(array[i] == valor) {
			*flag = 1;
			*posicion = i;
			break;
		}
	}
}

/* Pantallas */
	/* Definición de pantalla_00() */
void pantalla_00(void) {
	line();
	printf("\t1. Ingresar valores\n\t2. Ordenar por bubblesort \n\t3. Buscar valor\n\t4. Mostrar \n\n\t0. Salir\n");
	line();
}

	/* Definición de pantalla_01() */
void pantalla_01(void) {
	line();
	printf("\t1. Búsqueda binaria\n\t2. Búsqueda secuencial\n\n\t9. Atras\n");
	line();
}
