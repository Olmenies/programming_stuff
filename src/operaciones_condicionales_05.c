/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 05
*	Consigna: Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es.
*	Alumno: Nicolás Esteban Olmedos
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

/* Función principal */
int main() {
	clrscr();
	
	/* Declaraciones locales */
	int lado0, lado1, lado2;
	char res[12];
	
	/* Input de data */
	printf("Insertar los tres lados de un triángulo: ");
	scanf("%d" "%d" "%d", &lado0, &lado1, &lado2);
	
	/* Procesamiento de data */
	if ((lado0 == lado1) && (lado1 == lado2))
		strcpy(res, "equilátero");
	else if ((lado0 == lado1) || (lado1 == lado2) || (lado0 == lado2)) 
		strcpy(res, "isósceles");
	else 
		strcpy(res, "escaleno");

	/* Output de data */
	printf("Según sus lados, el triángulo presentado es %s\n", res);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr() {
	system("clear");
}
	
	
