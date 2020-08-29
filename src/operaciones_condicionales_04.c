/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 05
*	Consigna: Ingresar dos valores y realizar la resta del mayor menos el menor.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void	clrscr(void);
int calc_resta(int arg0, int arg1);

/* Función principal */
int main() {
	/* Declaraciones locales */
	int val0, val1, res;
	
	/* Input de data */
	printf("Introducir dos números: ");
	scanf("%d" "%d", &val0, &val1);
	
	/* Procesamiento de data */
	if (val0 > val1)
		res = calc_resta(val0, val1);
	else if (val0 < val1)
		res = calc_resta(val1, val0);
		
	/* Output de data */
	printf("La resta del mayor menos el menor es da: %d\n", res);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calc_resta() */
int calc_resta(int arg0, int arg1) {
	int res;
	res = arg0 - arg1;
	return res;
}
