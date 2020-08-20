/*
*
*	Nombre del ejercicio: EJERCICIO DE VARIABLES Y ASIGNACIONES 1
*	Consigna: Ingresar dos valores enteros y sumarlos
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaraciones de variables globales */
	/* Declaraciones de prototipos de funciones */
int suma (int arg1, int arg2);
void clrscr(void);

/* Función principal */	
int main() {
	clrscr();
	
	/* Declaración de variables locales */
	int num0, num1, res;

	/* Input de data */
	printf("Ingresar un número entero: ");
	scanf("%d", &num0);
	printf("Ingresar otro número entero: ");
	scanf("%d", &num1);
	
	/* Procesamiento de data */
	res = suma(num0, num1);
	
	/* Output de data */
	printf("La suma de los números ingresados da: %d\n", res);
	
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
    system("clear");
}

	/* Definicion de suma() */
int suma(int arg1, int arg2)
{
	int res;
	res = arg1 + arg2;
	return res;
}
