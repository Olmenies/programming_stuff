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
#define ARRAY_SIZE 30

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
float calc_prom(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int acum_pos=0, acum_total=0, cont_neg=0, cont_pos=0, cont_cero=0, cont_total=0, i=0;
	float prom_pos=0, prom_total=0;

	int array[ARRAY_SIZE];

	/* Input de data */
	for(i=0;i<=ARRAY_SIZE;i++) {
		printf("Posición: %d\n", i);
		printf("Ingresar valor: ");
		scanf("%d", &array[i]);
		printf("Valor ingresado: %d\n", array[i]);
		printf("***\n");
		
		if(array[i]>0) {
			cont_pos++;
			acum_pos+=array[i];
			acum_total+=array[i];
			cont_total++;
		}
		else if(array[i]<0) {
			cont_neg++;
			acum_total+=array[i];
			cont_total++;
		}
		else {
			cont_cero++;
			cont_total++;
		}
	}

	/* Procesamiento de data */

	prom_pos = calc_prom(acum_pos, cont_pos);
	prom_total = calc_prom(acum_total, cont_total);

	/* Output de data */
	line();

	printf("Cantidad de valores positivos: %d\n", cont_pos);
	printf("Cantidad de valores negativos: %d\n", cont_neg);
	printf("Cantidad de ceros: %d\n", cont_cero);
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

