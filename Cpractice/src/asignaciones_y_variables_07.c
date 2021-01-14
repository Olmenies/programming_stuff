/*
*
* Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 07
*	Consigna: Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */

/* Definiciones globales */
	/* Declaración de variables globales */
	
	/* Declaración de prototipos de funciones */
void clrscr(void);
float suma(float arg0, float arg1);
float resta(float arg0, float arg1);
float producto(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaración de variables locales */
	float valor0, valor1, res_suma, res_resta, res_prod;
	
	/* Input de data */
	printf("Ingresar un valor para A: ");
	scanf("%f", &valor0);
	printf("Ingresar un valor para B: ");
	scanf("%f", &valor1);
	
	/* Procesamiento de data */
	res_suma = suma(valor0, valor1);
	res_resta = resta(valor0, valor1);
	res_prod = producto(valor0, valor1);
	
	/* Output de data */
	printf("A + B = %f\n B - A = %f\n A * B = %f\n", res_suma, res_resta, res_prod);
	return 0;	
}

/* Otras funciones */
	/* Decla
	 * clrscr();ración de clrscr() */
void clrscr(void) {
	system("clear");
}
	/* Declaración de suma() */
float suma(float arg0, float arg1) {
	float res;
	res = arg0 + arg1;
	return res;
}

	/* Declaración de resta() */
float resta(float arg0, float arg1) {
	float res;
	res = arg1 - arg0;
	return res;
}

 /* Declaración de producto */ 
float producto(float arg0, float arg1) {
	float res;
	res = arg0 * arg1;
	return res;
}
