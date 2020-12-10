/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 06
*	Consigna: Ingresar el precio de N artículos, indicar el más caro, el más barato, el precio promedio y la suma de todos los precios.
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
	int cant_art, cod_art, art_max, art_min, i;
	float precio, precio_max, precio_min, precio_prom, acum;

	/* Input de data */

	printf("Ingresar cantidad de artículos a analizar: ");
	scanf("%d", &cant_art);

	for(i=0; i<=(cant_art-1);i++) {
		printf("Ingresar código de artículo(%d restantes): ", (cant_art-i));
		scanf("%d", &cod_art);
		printf("Ingresar precio del artículo $%d: %", cod_art);
		scanf("%f", &precio);

		if(precio > precio_max || i==0) {
			precio_max = precio;
			art_max = cod_art;
		}
		if(precio < precio_min || i==0) {
			precio_min = precio;
			art_min = cod_art;
		}
		acum+=precio; 
	}
	/* Procesamiento de data */
	precio_prom = calc_prom(acum,i);

	/* Output de data */
	printf("Artículo más caro: %d\n", art_max);
	printf("Artículo más barato: %d\n", art_min);
	printf("Suma de todos los precios: $%.2f\n", acum);
	printf("Promedio de todos los precios: $%.2f\n", precio_prom);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calc_prom() */
float calc_prom(float arg0, float arg1) {
	float res;
	res = arg0/arg1;
	return res;
}
