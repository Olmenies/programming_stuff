/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 05
*	Consigna: Sobre el ejercicio anterior indicar cuántas superan los $ 10000
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
	int numero_factura, cont_facturas_1k=0, cont_facturas_10k=0;
	float importe, acum_importe=0;

	/* Input de data */
	while(1)
	{
		printf("Ingresar número de factura: ");
		scanf("%d", &numero_factura);

		if (numero_factura == 0)
			break;

		printf("Ingresar importe de la factura %d: ", numero_factura);
		scanf("%f", &importe);
		acum_importe += importe;
	
		if (importe > 1000)
		{
			printf("¡Advertencia! La factura %d supera los $1.000 de importe\n", numero_factura);
			cont_facturas_1k++;

			if (importe > 10000) 
			{
				printf("¡Advertencia! La factura %d supera los $10.000 de importe\n", numero_factura);
				cont_facturas_10k++;
			}

		}
	}
	
	/* Procesamiento de data */
	/* Output de data */
	printf("Total gastado: $%.2f\n",acum_importe);
	printf("Cantidad de facturas con importe mayor a $1.000: %d\n", cont_facturas_1k);
	printf("Cantidad de facturas con importe mayor a $10.000: %d\n", cont_facturas_10k);
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr()
{
	system("clear");
}
