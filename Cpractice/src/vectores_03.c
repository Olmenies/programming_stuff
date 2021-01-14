/*
*
*	Título: TP DE VECTORES 03
*	Consigna: Ingresar datos y cargar un vector de 10 elementos, imprimir:
*	A. (x) Cantidad de elementos del vector cuyo valor sea igual a 1
*	B. (x) Suma de los elementos del vector
*	C. (x) Porcentual que representa cada elemento sobre el total
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
int buscador_unos(int *array);
int suma_vector(int *array);
int suma_array(int *array);
void output_data(int cont_unos, int acum, int *array);
void calculo_porcentaje(int *array, float acum);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int cont_unos=0, acum=0;
	int array[ARRAY_SIZE];

	/* Input de data */
	input_data(array);

	/* Procesamiento de data */
	cont_unos = buscador_unos(array);
	acum = suma_array(array);

	/* Output de data */
	output_data(cont_unos, acum, array);
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

	/* Definición de input_data() */
void input_data(int *array) {
	int i;
	for(i=0;i<=ARRAY_SIZE-1;i++) {
		printf("Ingresar un valor(%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array[i]);
	}
}
	/* Definición buscador_unos() */
int buscador_unos(int *array) {
	int i=0, cont=0;
	for(i=0;i<=ARRAY_SIZE;i++) {
		if(array[i]==1)
			cont++;
	}
	return cont;
}

	/* Definición suma_array() */
int suma_array(int *array) {
	int i=0, acum=0;
	for(i=0;i<=ARRAY_SIZE;i++) {
		acum+=array[i];
	}
	return acum;
}

	/* Definición output_data() */
void output_data(int cont_unos, int acum, int *array) {
	line();
	printf("Cantidad de unos: %d\n", cont_unos);
	printf("Acumulador: %d\n", acum);
	calculo_porcentaje(array,acum);
	line();
}

	/*Definición calculo_porcentaje() */
void calculo_porcentaje(int *array, float acum) {
	int i=0;
	float res=0;
	for(i=0;i<=ARRAY_SIZE-1;i++) {
		res = array[i]*100/acum;
		printf("%d representa el %.2f%\n", array[i], res);
	}

}
