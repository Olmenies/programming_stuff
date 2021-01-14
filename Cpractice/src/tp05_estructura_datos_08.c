/*
*
*	Título: TP 5 ESTRUCTURA DE DATOS 09
*	Consigna: 8. Desarrolle un programa que, a partir de los datos prefijados de los días de cada mes, diga qué meses tienen 30 días. Se deberá mostrar el número de cada mes, pero empezando a contar desde 1 (abril será el mes 4).
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	/* Input de data */
	/* Procesamiento de data */
	/* Output de data */
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() */
void line(void) {
	i=0;
	for(i=0; i<=20; i++) {
		printf("***");
	}
	printf("\n");
}
