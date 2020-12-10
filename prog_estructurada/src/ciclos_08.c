/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 08
*	Consigna: Ingresar valores hasta uno = 0, indicar la cantidad de números ingresados y su promedio.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_prom(float arg0, float arg1);
void clrscr(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int cont=0;
	float acum, prom, valor;

	int condicion_salida = 0;

	/* Input de data */
	do 
	{
		printf("Ingresar un valor: ");
		scanf("%f", &valor);
		if(valor !=0)
		{
			acum+=valor;
			cont++;
		}
	} while(valor!=0);

	/* Procesamiento de data */
	prom = calc_prom(acum,cont);

	/* Output de data */
	printf("Cantidad de números ingresados: %d\n", cont);
	printf("Promedio de números ingesados: %.2f\n", prom);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}

float calc_prom(float arg0, float arg1)
{
	float res;
	res = arg0/arg1;
	return res;
}
