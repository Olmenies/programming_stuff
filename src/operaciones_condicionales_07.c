/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES
*	Consigna: Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar cúal de esta sumas es mayor.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int calc_suma(int arg0, int arg1);
	
/* Función principal */
int main() {
	clrscr();
	
	/* Declaraciones locales */
	int valor0, valor1, valor2, valor3, suma0, suma1, res0;
	char res1[15];
	
	/* Input de data */
	printf("Ingresar 4 valores: ");
	scanf("%d%d%d%d", &valor0, &valor1, &valor2, &valor3);
	
	/* Procesamiento de data */
	suma0 = calc_suma(valor0, valor2);
	suma1 = calc_suma(valor1, valor3);
	
	if (suma0 > suma1) {
		res0 = suma0;
		strcpy(res1, "A + C");
	} else if (suma0 < suma1) {
		res0 = suma1;
		strcpy(res1,"B + D");
		}
		
	/* Output de data */
	printf("La suma %s es la mayor y da como resultado %d\n", res1, res0);
	return 0;
	
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calc_suma() */
int calc_suma(int arg0, int arg1) {
	int res;
	res = arg0 + arg1;
	return res;
}
