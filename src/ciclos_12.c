/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 12
*	Consigna: 
*
*	12. Ingresar los datos de facturación de una empresa.

		A. Número de factura
		B. Número de artículo
		C. Cantidad vendida
		D. Precio unitario

		Los datos finalizan con numero de factura = 0, cada factura sólo tiene un número de artículo, existen tres artículos.
		Se desea saber:

		A. Valor de cada factura. (x)
		B. Facturación total. (x)
		C. Cuánto se vendio del artículo 1 en cantidad. (x)
		D. Cuántas facturas mayores de $ 3000 se hicieron. (x)
		E. Qué porcentaje representa el monto vendido por cada artículo sobre el total. (x)
		
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
int main() {
	/* Declaraciones locales */
	int num_factura, num_articulo, cant_total, cant1=0,cant2=0,cant3=0, cant_3k=0, cant_temp=0;
	float acum1=0, acum2=0, acum3=0, acum_total=0, porcentaje1=0, porcentaje2=0, porcentaje3=0, precio_unitario;

	/* Input de data */
	do 
	{
		printf("Ingresar número de factura: ");
		scanf("%d", &num_factura);
		if (num_factura == 0)
			break;

		do
		{
			printf("Ingresar artículo seleccionado (1, 2 o 3): ");
			scanf("%d", &num_articulo);
			if (num_articulo < 1 || num_articulo >3)
				printf("Número de artículo no válido.\n");
		} while (num_articulo < 1 || num_articulo >3);

		printf("Ingresar cantidad vendida del artículo %d: ", num_articulo);
                scanf("%d", &cant_temp);
		printf("Ingresar precio unitario del artículo %d: $", num_articulo);
		scanf("%f", &precio_unitario);

		switch (num_articulo)
		{
			case 1: 
				acum1+=(precio_unitario*cant_temp);
				acum_total+=(precio_unitario*cant_temp);
				cant1++;
				cant_total++;
				break;

			case 2:
				acum2+=(precio_unitario*cant_temp);
				acum_total+=(precio_unitario*cant_temp);
				cant2++;
				cant_total++;
				break;

			case 3:
				acum3+=(precio_unitario*cant_temp);
				acum_total+=(precio_unitario*cant_temp);
				cant3++;
				cant_total++;
				break;

			default:
				printf("No deberías estar acá");
				break;
		}

		if (precio_unitario > 3000)
			cant_3k++;
		printf("Valor factura %d: %f\n", num_factura, (precio_unitario*cant_temp));

	} while(num_factura != 0);

	/* Procesamiento de data */
	porcentaje1=calc_porcentaje(acum1,acum_total);
	porcentaje2=calc_porcentaje(acum2,acum_total);
	porcentaje3=calc_porcentaje(acum3,acum_total);

	/* Output de data */
	printf("Facturación total: %.2f\n",acum_total);
	printf("Cantidad de ventas artículo 1: %d\n",cant1);
	printf("Cantidad de facturas mayores a $3.000: %d\n",cant_3k);
	printf("Porcentaje del monto total de los artíulos 1: %.2f\n", porcentaje1);
	printf("Porcentaje del monto total de los artíulos 2: %.2f\n", porcentaje2);
	printf("Porcentaje del monto total de los artíulos 3: %.2f\n", porcentaje3);

	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}
	/* Definición de calc_porcentaje() */
float calc_porcentaje(float arg0, float arg1)
{
	float res=0;
	res = arg0*100/arg1;
	return res;
}
