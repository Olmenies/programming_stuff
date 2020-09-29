/*
*
*	Título: EJERCICIOS COMBINADOS 01
*	Consigna:
*
*	1. En una empresa los empleados cobran un sueldo según la categoria, son 50 empleados y 3 categorías.
		A. Categoría 1 = $ 1500
		B. Categoría 2 = $ 2000
		C. Categoría 3 = $ 2500

Al sueldo se le suman $ 100 por cada año trabajado.
Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular:
		A. (x) Cuántos empleados hay por categoría. 
		B. (x) Total de sueldos pagados por categoría.
		C. (x) Sueldo promedio general.
		D. (x) Sueldo máximo y a quién pertenece. 
		E. (x) Qué porcentuel sobre el total de sueldos representa cada total de sueldos de las categorías.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Macros del procesador */
#define SUELDO_CAT1  1500
#define SUELDO_CAT2  2000
#define SUELDO_CAT3  2500

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_porc(float arg0, float arg1);
float calc_prom(float arg0, float arg1);
void clrscr(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int i, cat, antiguedad, cont_empl_cat1=0, cont_empl_cat2=0, cont_empl_cat3=0, cont_total;
	float acum_sueldo_cat1, acum_sueldo_cat2, acum_sueldo_cat3, acum_sueldo_total, sueldo_prom, sueldo_max, sueldo, porcentaje_cat1, porcentaje_cat2, porcentaje_cat3;
	char empleado[20], empl_max[20];

	int condicion_salida = 3;

	/* Input de data */
	for(i=0;i<=(condicion_salida-1);i++){

		printf("Ingresar nombre del empleado(%d restantes): ",(condicion_salida-i));
		fflush(stdin);
		scanf("%s", empleado);

		do {
			printf("Ingresar categoría del empleado %s: ", empleado);
			scanf("%d", &cat);

			if(cat<1 || cat>3)
				printf("Categoría no válida.\n Categorías válidas: 1, 2 o 3.\n");

		}while(cat <1 || cat>3);
		
		printf("Ingresar antiguedad del empleado %s: ", empleado);
		scanf("%d", &antiguedad);

                  switch(cat ){
                          case 1: 
                                cont_empl_cat1++;
                                sueldo = SUELDO_CAT1+(100*antiguedad);
                                acum_sueldo_cat1+=sueldo;
                                break;
                          case 2: 
                                cont_empl_cat2++;
                                sueldo = SUELDO_CAT2+(100*antiguedad);
                                acum_sueldo_cat2+=sueldo;
                                break;
                         case 3: 
                                cont_empl_cat3++;
                                sueldo = SUELDO_CAT3+(100*antiguedad);
                                acum_sueldo_cat3+=sueldo;
                                 break;
                         default:
                                 printf("No deberías estar acá, por favor reportar esto asap.");
                 }

		  if(sueldo > sueldo_max || i==0) {
			  sueldo_max = sueldo;
			  strcpy(empl_max,empleado);
		  }

		  printf("***\n");

	}

	/* Procesamiento de data */

	acum_sueldo_total = acum_sueldo_cat1 + acum_sueldo_cat2 + acum_sueldo_cat3;
	cont_total = cont_empl_cat1 + cont_empl_cat2 + cont_empl_cat3;
	sueldo_prom = calc_prom(acum_sueldo_total, cont_total);
	porcentaje_cat1 = calc_porc(acum_sueldo_cat1, acum_sueldo_total);
	porcentaje_cat2 = calc_porc(acum_sueldo_cat2, acum_sueldo_total);
	porcentaje_cat3 = calc_porc(acum_sueldo_cat3, acum_sueldo_total);

	/* Output de data */
	printf("**************************************************\n");
	printf("Cantidad de empleados categoría 1: %d\n", cont_empl_cat1);
	printf("Cantidad de empleados categoría 2: %d\n", cont_empl_cat2);
	printf("Cantidad de empleados categoría 3: %d\n", cont_empl_cat3);
	printf("Total de sueldos pagado categoría 1: $%.2f\n", acum_sueldo_cat1);
	printf("Total de sueldos pagado categoría 2: $%.2f\n", acum_sueldo_cat2);
	printf("Total de sueldos pagado categoría 3: $%.2f\n", acum_sueldo_cat3);
	printf("Promedio de todos los sueldos: $%.2f\n", sueldo_prom);
	printf("Mayor sueldo: %s $%.2f\n", empl_max, sueldo_max);
	printf("Porcentaje sueldos categoría 1 sobre total: $%.2f\%\n", porcentaje_cat1);
	printf("Porcentaje sueldos categoría 2 sobre total: $%.2f\%\n", porcentaje_cat2);
	printf("Porcentaje sueldos categoría 3 sobre total: $%.2f\%\n", porcentaje_cat3);
	printf("**************************************************\n");
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
	/* Definición de calc_porc() */
float calc_porc(float arg0, float arg1) {
	float res;
	res = arg0*100/arg1;
	return res;
}
