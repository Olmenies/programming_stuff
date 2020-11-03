/*
*
*	Título: EJERCICIOS DE VECTORES 04
*	Consigna: 4. Ingresar 25 edades, y calcular
*	A. (o) Edad promedio
*	B. () Imprimir las edades mayores a 34 años
*	C. () Imprimir las edades menores a 21 años
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
void buscador_edades(int *array, int cond);
float calc_prom(float acum, float cant);
void clrscr(void);
void input_data(int *array, int *acum);
void line(void);
void output_data(float prom, int *array);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int acum=0;
	int *acum_address=&acum;
	float prom=0;
	int array[ARRAY_SIZE];

	/* Input de data */
	input_data(array, acum_address);

	/* Procesamiento de data */
	prom=calc_prom(acum, ARRAY_SIZE);

	/* Output de data */
	output_data(prom,array);
	return 0;
}

/* Otras funciones */
	/* Definición de buscador_edades() */
void buscador_edades(int *array, int cond) {
	int i=0;
	for(i=0;i<=ARRAY_SIZE-1;i++) {
		if(array[i] > cond ){
			printf("\t%d\n", array[i]);
		}
	}
}
	/* Definición de calc_prom() */
float calc_prom(float acum, float cant) {
	float res=0;
	res = acum/cant;
	return res;
}

	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}


	/* Definición de input_data() */
void input_data(int *array, int *acum) {
	int i=0;
	for(i=0;i<=ARRAY_SIZE-1;i++) {
		printf("Ingresar una edad (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
		*acum+=array[i];
	}
}

	/* Definición de line() */
void line(void) {
	int i=0;
	for(i=0;i<=20;i++) {
		printf("***");
		if(i==20) {
			printf("\n");
		}
	}
}

	/* Definición de output_data() */
void output_data(float prom, int *array) {
	line();
	printf("A. Edad promedio: %.2f\n", prom);
	printf("B. Edades mayores de 35:\n");
	buscador_edades(array,35);
	printf("C. Edades mayores de 24:\n");
	buscador_edades(array,24);
	line();
}
