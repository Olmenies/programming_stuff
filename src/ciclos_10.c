/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES
*	Consigna: Ingresar la patente y monto de la multa de 50 autos, indicar cuántos montos superan los $40 y del total cobrado que porcentaje representa la suma de estos últimos.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_porcentaje(float arg0, float arg1);
void clrscr(void);

/* Función principal */
int main()
{
	clrscr();

	/* Declaraciones locales */
	char patente[7];
	int i,cont_m40;
	float acum_m40=0, acum_total=0, importe_multa, porcentaje_m40;

	int condicion_salida=10;

	/* Input de data */
	for (i=0;i<=(condicion_salida-1);i++)
	{
		printf("Ingresar patente: ");
		fflush(stdin);
		scanf("%s", patente);
		printf("Ingresar importe de la multa: ");
		scanf("%f", &importe_multa);

		printf("Patente: %s\n",patente);
		printf("Iteración: %d\n",i);
		printf("Importe: %f\n",importe_multa);

		acum_total+=importe_multa;

		if (importe_multa > 40) 
		{
			cont_m40++;
			acum_m40+=importe_multa;
		}
	}
	/* Procesamiento de data */
	porcentaje_m40 = calc_porcentaje(acum_m40,acum_total);

	/* Output de data */
	printf("Cantidad de multas que superan los $40: %i\n", cont_m40);
	printf("Porcentaje cobrado de multas que superan los $40: %.2f\n", porcentaje_m40);

	return 0;

}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}

float calc_porcentaje(float arg0, float arg1)
{
	float res=0;
	res = arg0*100/arg1;
	return res;
}
