/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 7
*	Consigna: Ingresar 10 valores, indicar cuántos son positivos, cuántos negativos y cuántos ceros.
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
int main() {
	clrscr();

	/* Declaraciones locales */
	int i,cont_cero=0, cont_neg=0, cont_pos=0;
	float valor;

	/* Input de data */
	for (i=0;i<=9;i++) {
		printf("Ingresar un valor: ");
		scanf("%f", &valor);

		if (valor < 0) 
			cont_neg++;
		else if (valor == 0)
			cont_cero++;
		else
			cont_pos++;

		}

	/* Procesamiento de data */
	/* Output de data */
	printf("Cantidad de negativos ingresados: %d\n", cont_neg);
	printf("Cantidad de ceros ingresados: %d\n", cont_cero);
	printf("Cantidad de positivos ingresados: %d\n", cont_pos);

	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */

void clrscr(void)
{
	system("clear");
}

