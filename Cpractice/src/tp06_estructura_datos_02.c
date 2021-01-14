/*
*
*	Título: TP 6 ESTRUCTURAS DE DATOS #2 02
*	Consigna: 1. Ingresar datos y cargar un vector de 30 elementos, imprimir
*	A. (x) Cantidad de valores positivos.
*	B. (x) Cantidad de valores negativos.
*	C. (x) Cantidad de ceros.
*	D. (x) Promedio de los positivos.
*	E. (x) Promedio general.
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
void procesamiento_data(int *array_elementos, int *array_acumuladores, int *array_contadores, float *array_promedios);

float calc_prom(float acumulador, float contador);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int opcion=0;

	int array_elementos[ARRAY_SIZE] = {0};

	/* En este array se van a guardar los contadores resultantes
	 * array_contadores[0] = Cantidad total
	 * array_contadores[1] = Cantidad de negativos
	 * array_contadores[2] = Cantidad de ceros
	 * array_contadores[3] = Cantidad de positivos */
	int array_contadores[4] = {0};

	/* En este array se van a guardar los acumuladores
	 * array_acumuladores[0] = Acumulación total
	 * array_acumuladores[1] = Acumulación de positivos */
	int array_acumuladores[3] = {0};

	/* En este array se van a guardar los promedios resultantes
	 * array_promedios[0] = Promedio de los positivos 
	 * array_promedios[1] = Promedio general */
	float array_promedios[2] = {0};

	/* Menu */
	do {
		clrscr();
		pantalla_00();
		printf("Ingresar una opción: ");
		scanf("%d", &opcion);

		switch(opcion) {
			case 1:
				/* Input de data */
				input_data(array_elementos);

				/* Procesmiento de data */
				procesamiento_data(array_elementos, array_acumuladores, array_contadores, array_promedios);
				break;
			case 2:
				/* Output de data */
				do {
					clrscr();
					pantalla_01();
					printf("Ingresar una opcion: ");
					scanf("%d", &opcion);

					switch(opcion) {
						case 1:
							clrscr();
							line();
							printf("Cantidad de negativos: %d\n", array_contadores[1]);
							line();
							pausa();
							break;
						case 2:
							clrscr();
							line();
							printf("Cantidad de ceros: %d\n", array_contadores[2]);
							line();
							pausa();
							break;
						case 3:
							clrscr();
							line();
							printf("Cantidad de positivos: %d\n", array_contadores[3]);
							line();
							pausa();
							break;
						case 4:
							clrscr();
							line();
						       	printf("Promedio general: %.2f\n", array_promedios[0]);
							line();
							pausa();
							break;
						case 5:
							clrscr();
							line();
							printf("Promedio de positivos: %.2f\n", array_promedios[1]);
							line();
							pausa();
							break;
						case 9:
							clrscr();
							break;

						default:
							clrscr();
							line();
							printf("Opción inválida\n");
							line();
							pausa();
							break;
					}
				}while(opcion!=9);
				break;				
			case 0: 
				printf("Tshuss!\n");
				pausa();
				break;
			default:
				printf("Opción inválida\n");
				pausa();
				break;
		}
	}while(opcion != 0);
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
	printf("Tocar enter para continuar...");
	getchar();
	getchar();
}

	/*Definición de input_data() */
void input_data(int *array) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("Ingresar un entero (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
	}
}

	/* Definición de procesamiento_data() */
void procesamiento_data(int *array_elementos, int *array_acumuladores, int *array_contadores, float *array_promedios) {
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		if(array_elementos[i] < 0) {
			array_contadores[1]++;
			array_acumuladores[0]+=array_elementos[i];

		} else if(array_elementos[i] == 0) {
			array_contadores[2]++;
			array_acumuladores[0]+=array_elementos[i];
		} else {
			array_contadores[3]++;
			array_acumuladores[0]+=array_elementos[i];
			array_acumuladores[1]+=array_elementos[i];
		}
	}
	array_promedios[0] = calc_prom(array_acumuladores[0], ARRAY_SIZE);
	array_promedios[1] = calc_prom(array_acumuladores[1], array_contadores[3]);
}

	/* Definición de calc_prom() */
float calc_prom(float acumulador, float contador) {
	float res = 0;
	res = acumulador/contador;
	return res;
}

/* Pantallas */
	/* Definición de pantalla_00() */
void pantalla_00(void) {
	line();
	printf("\t1. Ingresar elementos\n\t2. Mostrar\n\n\t0. Salir\n");
	line();
}

	/* Definición de pantalla_01() */
void pantalla_01(void) {
	line();
	printf("\t1. Cantidad de negativos\n\t2. Cantidad de ceros\n\t3. Cantidad de positivos\n\t4. Promedio de positivos\n\t5. Promedio general\n\n\t9. Atrás\n");
	line();
}


