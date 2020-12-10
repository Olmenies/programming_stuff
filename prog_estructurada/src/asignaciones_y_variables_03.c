/*
*
*	Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 3
*	Consigna: Ingresar tres valores y sumarlos, se puede sumar de a varios operandos.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas de preprocesador */
#include <stdio.h>

/* Macros de procesador */

/* Definiciones globales */
	/* Declaración de variables globales */
	/* Declaracion de prototipos de funciones */
void clrscr(void);
int suma(int arg0, int arg1, int arg2);

/* Funcion principal */
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
	res = suma(num0, num1, num2);
	
	/* Output de data */
	printf("La sumatoria de los tres números da %d\n", res);
	return 0;

}

/* Otras funciones */
	/* Declaración de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de suma() */
int suma(int arg0, int arg1, int arg2) {
	int res;
	res = arg0 + arg1 + arg2;
	return res;
}

