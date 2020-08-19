/*
*
*	Nombre del ejercicio: EJERCICIO DE VARIABLES Y ASIGNACIONES 2
*	Consigna: Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos.
* Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaración de variables globales*/
	/* Declaración de prototipos de funciones */
void clrscr(void);
int suma(int arg0, int arg1);

/* Función principal */	
int main() {
	clrscr();
	
	/* Declaración de variables locales */
	int num0, num1, num2, res;
	
	/* Input de data */
	printf("Introducir número entero: ");
	scanf("%d", &num0);
	printf("Introducir número entero: ");
	scanf("%d", &num1);
	printf("Introducir número entero: ");
	scanf("%d", &num2);
	
	/* Procesamiento de data */
	res = suma(num0, num1);
	res = suma(res, num2);
	
	/* Output de data */
	printf("La sumatoria de los tres números da: %d\n", res);
	return 0;

}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definicion de suma() */
int suma(int arg0, int arg1) {
	int res;
	res = arg0 + arg1;
	return res;
}


