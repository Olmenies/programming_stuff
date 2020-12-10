/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 06
*	Consigna: Ingresar tres valores, sumarlos, calcular el promedio e indicar cúal de estos valores es mayor al promedio.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
float calc_prom(int arg0, int arg1, int arg2);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int valor0, valor1, valor2;
	float prom;
	
	/* Input de data */
	printf("Ingresar tres valores: ");
	scanf("%d%d%d", &valor0, &valor1, &valor2);
	
	/* Procesamiento de data */
	prom = calc_prom(valor0, valor1, valor2);
	
	/* Output de data */
	printf("El promedio entre %d%d y %d es %f\n", valor0, valor1, valor2);
	if (valor0 > prom) 
		printf("%d es mayor a %f\n", valor0, prom);
	if (valor1 > prom)
		printf("%d es mayor a %f\n", valor1, prom);
	if (valor2 > prom)
		printf("%d es mayor a %f\n", valor2, prom);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr() {
	system("clear");
}
	/* Definición de calc_prom() */
float calc_prom(int arg0, int arg1, int arg2) {
	float res;
	res = (arg0 + arg1 + arg2)/ 3;
	return res;
}
