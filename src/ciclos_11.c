/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 11
*	Consigna: Ingresar N valores y calcular promedio de positivos, de negativos y cantidad de ceros.
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
	float acum_neg=0, acum_pos=0, prom_neg, prom_pos, valor;
	int condicion_salida, cont_cero=0, cont_neg=0, cont_pos=0, i;

	/* Input de data */
	printf("Ingresar cantidad de números a ingresar: ");
	scanf("%d", &condicion_salida);

	for (i=0;i<=(condicion_salida-1);i++)
	{
		printf("Ingresar un valor (%d retantes): ",(condicion_salida-i));
		scanf("%f", &valor);

		if (valor < 0)
		{
			acum_neg+=valor;
			cont_neg++;
		} else if (valor == 0)
			cont_cero;
		else
		{
			acum_pos+=valor;
			cont_pos++;
		}
	}

	/* Procesamiento de data */
	
	if (cont_neg != 0)
		prom_neg = calc_prom(acum_neg,cont_neg);
	if (cont_pos !=0)
		prom_pos = calc_prom(acum_pos,cont_pos);

	/* Output de data */
	printf("Promedio de números negativos: %.2f\n", prom_neg);
	printf("Cantidad de ceros: %d\n",cont_cero);
	printf("Promedio de números positivos: %.2f\n",prom_pos);

	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr()
{
	system("clear");
}

float calc_prom(float arg0, float arg1)
{
	float res;
	res = arg0/arg1;
	return res;
}
