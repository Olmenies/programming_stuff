/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 01
*	Consigna: Ingresar N temperaturas e indicar la máxima y mínima.
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
	int i, cant_temp;
	float temp,temp_min,temp_max;
 
	/* Input de data */
	printf("Ingresar cantidad de temperaturas a analizar: ");
	scanf("%d", &cant_temp);

	for(i=0;i<=(cant_temp-1);i++)
	{
		printf("Ingresar una temperatura(%d restantes): ", (cant_temp-i));
		scanf("%f", &temp);

		if(temp>temp_max || i==0)
			temp_max = temp;
		if(temp<temp_min || i==0)
			temp_min = temp;

	}

	/* Procesamiento de data */
	/* Output de data */
	printf("Temp max == %.2f\n", temp_max);
	printf("Temp min == %.2f\n", temp_min);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}
