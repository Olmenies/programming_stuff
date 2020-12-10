/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 02
*	Consigna: Ingresar temperaturas hasta una temperatura igual a 1000, indicar la mayor y menor.
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
	float acum=0, temp, temp_min, temp_max;
	int condicion_salida = 1000, cont=0;

	/* Input de data */

	do 
	{
		printf("Ingresar temperaturas: ");
		scanf("%f", &temp);

		if(temp<temp_min || cont==0)
			temp_min=temp;
		if(temp>temp_max || cont==0)
			temp_max=temp;

		printf("Temp = %.2f\n",temp);
		printf("Temp mínima = %.2f\n",temp_min);
		printf("Temp máxima = %.2f\n",temp_max);

		acum+=temp;
		printf("Acumulación de temperaturas: %.2f\n", acum);

		cont++;

	} while(acum != condicion_salida);

	/* Procesamiento de data */
	/* Output de data */

		printf("Temp = %.2f\n",temp);
		printf("Temp mínima = %.2f\n",temp_min);
		printf("Temp máxima = %.2f\n",temp_max);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}
