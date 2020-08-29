/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 03
*	Consigna: Ingresar dos valores y realizar el producto, si el 1ro es mayor al 2do, si son iguales solo indicarlo.
*	Alumno: Nicolás ESteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int calc_producto(int arg0, int arg1);

/* Función principal */
int main() { 
	clrscr();
	
	/* Declaraciones locales */
	int valor0, valor1, res;
	
	/* Input de data */
	printf("Ingresar dos valores: ");
	scanf("%d" "%d", &valor0, &valor1);
	
	/* Procesamiento de data */
	if (valor0 > valor1) {
		res = calc_producto(valor0, valor1);
		
	/* Output de data */
		printf("%d * %d = %d\n", valor0, valor1, res);
		}
	else if (valor0 == valor1)
		printf("%d es igual a %d\n", valor0, valor1);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de cal_producto() */
int calc_producto(int arg0, int arg1) {
	int res;
	res = arg0 * arg1;
	return res;
}
