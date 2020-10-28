/*
*
*	Título: EJERCICIOS DE VECTORES 02
*	Consigna: Ingresar datos y cargar un vector de 30 elementos, imprimir:
*	A. (x) Cantidad de valores positivos
*	B. (x) Cantidad de valores negativos
*	C. (x) Cantidad de ceros
*	D. (x) Promedio de los positivos
*	E. (x) Promedio general
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_LEN 6

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_prom(float arg0, float arg1);
void clrscr(void);
void line(void);
void array_input(int *array_cont, int *array_acum, int pos, int valor);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int array_cont[4] = {0};
	int array_acum[4] = {0};

	int i=0, valor=0;
	float prom_pos=0, prom_total=0;

	/* Input de data */
	for(i=1;i<=ARRAY_LEN;i++) {
		printf("Ingresar valor: ");
		scanf("%d", &valor);
		
		if(valor<0) {
			array_input(array_cont, array_acum, 1, valor);
		}
		else if(valor==0) {
			array_input(array_cont, array_acum, 2, valor);
		}
		else {
			array_input(array_cont, array_acum, 3, valor);
		}

		printf("***\n");
	}

	/* Procesamiento de data */
	prom_pos = calc_prom(array_acum[3],array_cont[3]);
	prom_total = calc_prom((array_acum[1]+array_acum[2]+array_acum[3]),ARRAY_LEN);

	/* Output de data */
	line();

	printf("Cantidad de valores positivos: %d\n", array_cont[3]);
	printf("Cantidad de valores negativos: %d\n", array_cont[1]);
	printf("Cantidad de ceros: %d\n", array_cont[2]);
	printf("Promedio de los positivos: %.2f\n", prom_pos);
	printf("Promedio general: %.2f\n", prom_total);

	line();
	return 0;
}

/* Otras funciones */
	/* Definición de calc_prom() */
float calc_prom(float arg0, float arg1) {
	float res=0;
	res = arg0/arg1;
	return res;
}

	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() - Línea de asteriscos para separar el resultado */
void line(void) {
	int i = 0;
	for(i=0;i<=20;i++) {
		printf("***");
		if(i==20)
			printf("\n");
	}
}

	/* Definición de array_input() */
void array_input(int *array_cont, int *array_acum, int pos, int valor) {
	array_cont[pos]++;
	array_acum[pos]+=valor;
	printf("array_cont[%d] = %d\n",pos, array_cont[pos]);
	printf("array_acum[%d] = %d\n",pos, array_acum[pos]);
}
