/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 12
*	Consigna: Sobre los datos del ejercico anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad.
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
int calc_sueldo(int arg0,int arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int antiguedad, categoria, empleado, sueldo;
	/* Input de data */
	printf("Ingresar antiguedad: ");
	scanf("%d", &antiguedad);
	printf("Ingresar categoria: ");
	scanf("%d", &categoria);
	printf("Ingresar código de empleado: ");
	scanf("%d", &empleado);
	printf("Ingresar sueldo:");
	scanf("%d", &sueldo);
	/* Procesamiento de data */
	if (categoria == 1) {
		sueldo = calc_sueldo(sueldo,antiguedad);
	}
	/* Output de data */
	if (antiguedad > 5) {
		printf("Sueldo %d: %d\n", empleado, sueldo);
	}
	return 0;
}
/* Otras funciones */
	/* Definición clrscr()*/
void clrscr(void) {
	system("clear");
}
	/* Definición calc_sueldo() */
int calc_sueldo(int arg0, int arg1) {
	int res;
	res = arg0 + arg1 * 50;
	return res;
}
