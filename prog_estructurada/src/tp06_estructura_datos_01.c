/*
*
*	Título: TP 6 ESTRUCTURA DE DATOS 01
*	Consigna: 1. Ingresar datos y cargar un vector de 50 elementos, calcular
*	A. (x) La suma de todos los elementos.
*	B. (x) El producto de todos los elementos.
*	C. (x) Mostrar del vector el elemento 50 al 1.
*	D. (x) Imprimir las componentes de indice par.
*	E. (x) Imprimir las componentes de indice impar.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 4 

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(int *array);
void output_data(void);

void array_suma(int *array);
void array_producto(int *array);
void array_mostrar_general(int *array);
void array_mostrar_parcial(int *array, int n);

void pantalla_00(int *array);
void pantalla_01(int *array);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int opcion=0, i=0;
	int array[ARRAY_SIZE] = {0};

	/* Menu */
	do{
		pantalla_00(array);
		printf("Ingresar una opción: ");
		scanf("%d", &opcion);

		switch(opcion) {
			case 0:
				break;
			case 1:
				/* Input de data */
				clrscr();
				input_data(array);
				clrscr();
				break;
			case 2:
				/* Procesamiento de data */
				clrscr();
				array_suma(array);
				clrscr();
				break;
			case 3:
				/* Procesamiento de data */
				clrscr();
				array_producto(array);
				clrscr();
				break;
			case 4: 
				do {
				clrscr();
				pantalla_01(array);
				printf("Ingresar una opción: ");
				scanf("%d", &opcion);
					switch(opcion) {
						case 1:
							printf("Índice general: \n");
							array_mostrar_general(array);
							break;
						case 2:
							printf("Índices impares: \n");
							array_mostrar_parcial(array,1);
							break;
						case 3:
							printf("Índices pares: \n");
							array_mostrar_parcial(array,2);
							break;
						case 9:
							break;
						default:
							printf("Opción no válida\n");
							break;
					}
				}while(opcion != 9);
					clrscr();
				break;	
			default:
				printf("Opción no válida.\n");
				break;
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
	for(i=1; i<ARRAY_SIZE; i++) {
		printf("Ingresar un entero: ");
		scanf("%d", &array[i]);
	}
}

	/* Definición de array_suma() */
void array_suma(int *array) {
	int i=0;
	array[0] = 0;

	for(i=1; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i, array[i]);
		array[0]+=array[i];
	}
	printf("Sumatoria de elementos: %d\n", array[0]);
	getchar();
	getchar();
}

	/* Definición de array_producto() */
void array_producto(int *array) {
	int i=1;
	array[0] = 1;

	for(i=1; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\n", i, array[i]);
		array[0] = array[0] * array[i];
	}
	printf("Producto de los elementos: %d\n", array[0]);
	getchar();
	getchar();
}

	/* Definición de array_mostrar_general() */
void array_mostrar_general(int *array) {
	int i=0;
	for(i=ARRAY_SIZE-1; i>=1; i--) {
		printf("\tarray[%d] = %d\n", i, array[i]);
	}
	printf("Enter para continuar...\n");
	getchar();
	getchar();
}

	/* Definición de array_mostrar_parcial() */
void array_mostrar_parcial(int *array, int n) {
	int i=0;
	for(i=1; i<ARRAY_SIZE; i++) {
		if(n == 1) {
			if((i%2) != 0) {
				printf("\tarray[%d] = %d\n", i, array[i]);
			}
		} else {
			if((i%2) == 0) {
				printf("\tarray[%d] = %d\n", i, array[i]);
			}
		}
	}
	printf("Enter para continuar...\n");
	getchar();
	getchar();
}

	/* Definición de pantalla_00() */
void pantalla_00(int *array) {
	line();
	printf("\t1. Ingresar elementos.\n\t2. Sumar elementos.\n\t3. Multiplicar elementos.\n\t4. Mostrar.\n\n\t0. Salir.\n");
	line();
}

	/* Definición de pantalla_01() */
void pantalla_01(int *array) {
	line();
	printf("Mostrar\n");
	printf("\t1. Vector general.\n\t2. Índices impares.\n\t3. Índices pares.\n\n\t9.Atrás.\n");
	line();

}
