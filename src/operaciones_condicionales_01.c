/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 01
*	Consigna: Ingresar dos valores, indicar si son iguales.
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

/* Función principal */
int main()
{
	clrscr();
	/* Declaraciones locales */
	int valor0, valor1;
	
	/* Input de data */
	printf("Ingresar dos valores: ");
	scanf("%d" "%d", &valor0, &valor1);

	/* Procesamiento de data */
	/* Output de data */
		if(valor0 == valor1)
			puts("Los valores ingresados son iguales");
		return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}
