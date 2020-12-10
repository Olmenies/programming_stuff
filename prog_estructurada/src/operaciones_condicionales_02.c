/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 2
*	Consigna: Ingresar un valor indicar si es positivo, negativo o cero.
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
	int valor;
	
	/* Input de data */
	printf("Introducir un entero: ");
	scanf("%d", &valor);
	
	/* Procesamiento de data */
	
	/* Output de data */
	if (valor > 0) 
		printf("%d es positivo.\n", valor);
	else if (valor == 0) 
		printf("%d es cero.\n", valor);
	else 
		printf("%d es negativo\n", valor);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
