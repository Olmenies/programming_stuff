/*
*
*	Título: EJERCICIOS COMBINADOS 02
*	Consigna: Una empresa conoce el nombre, sueldo y categoría de sus empleados, son 4 categorías, y la cantidad de empleados es variable N. Se desea saber:
		A. (x) Cantidad de empleados por categoría.
		B. (x) Cantidad de empleados que cobran mas de $ 2000.
		C. (x) Cantidad de empleados de la categoría 1 con sueldo mayor a $ 1000.
		D. (x) Sueldo máximo y a qué empleado pertenece.
		E. (x) Sueldo mínimo y a que empleado pertenece.
		F. (x) Categoría con más empleados.
		G. (x) Porcentual en cantidad de empleados de cada categoría sobre el total de la empresa.
*	Alumno: Nicolás Esteban Olmedo 
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_porc(float arg0, float arg1);
void clrscr(void);
void output_data(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int i, cant_empl_cat1=0, cant_empl_cat2=0, cant_empl_cat3=0, cant_empl_cat4=0, cat, sueldo_2k=0, sueldo_1k_cat1=0, cant_max=0, cant_total;
	float sueldo, sueldo_min, sueldo_max, porc_cat1, porc_cat2, porc_cat3, porc_cat4;
	char nombre[20], nombre_min[20], nombre_max[20];

	int n=3;

	/* Input de data */
	for(i=0;i<=(n-1);i++) {
		printf("Ingresar nombre del empleado(%d restantes): ", (n-i));
		fflush(stdin);
		scanf("%s", nombre);
		
		/* Verificación de que la categoría es válida */
		do {
			printf("Ingresar categoría del empledo %s: ", nombre);
			scanf("%d", &cat);
			if (cat<1 || cat>4) {
				printf("Categoría no válida.\nIngresar una categoría válida (1,2,3 o 4)\n");
			}
		}while (cat<1 || cat> 4);

		printf("Ingresar sueldo del empleado %s: $", nombre);
		scanf("%f", &sueldo);

		/* Cuantificación según la categoría */

		switch (cat) {
			case 1:
				cant_empl_cat1++;
				break;
			case 2:
				cant_empl_cat2++;
				break;
			case 3:
				cant_empl_cat3++;
				break;
			case 4:
				cant_empl_cat4++;
				break;
			default:
				printf("No deberías estar acá, por favor reportar esto asap.\n");

		}
		printf("nombre == %s\n", nombre);
		printf("cat == %d\n",cat);
		printf("sueldo == %f\n", sueldo);
		printf("***\n");

		if(sueldo>2000)
			sueldo_2k++;

		if(sueldo>1000 && cat==1)
			sueldo_1k_cat1++;

		if(sueldo < sueldo_min || i==0) {
			sueldo_min = sueldo;
			strcpy(nombre_min, nombre);

		}
		if(sueldo > sueldo_max || i==0) {
			sueldo_max = sueldo;
			strcpy(nombre_max,nombre);

		}
	}

	/* Definición de categoría con más empleados */

	if (cant_empl_cat1 > cant_empl_cat2 && cant_empl_cat1 > cant_empl_cat3 && cant_empl_cat1 > cant_empl_cat4)
		cant_max = cant_empl_cat1;
	else if(cant_empl_cat2 > cant_empl_cat1 && cant_empl_cat2 > cant_empl_cat3 && cant_empl_cat2 > cant_empl_cat4)
		cant_max = cant_empl_cat2;
	else if(cant_empl_cat3 > cant_empl_cat1 && cant_empl_cat3 > cant_empl_cat2 && cant_empl_cat3 > cant_empl_cat4)
		cant_max = cant_empl_cat3;
	else if(cant_empl_cat4 > cant_empl_cat1 && cant_empl_cat4 > cant_empl_cat2 && cant_empl_cat4 > cant_empl_cat3)
		cant_max = cant_empl_cat4;
	else
		cant_max = 0;

	/* Cantidad de empleados total */
	cant_total = cant_empl_cat1 + cant_empl_cat2 + cant_empl_cat3 + cant_empl_cat4;
	porc_cat1 = calc_porc(cant_empl_cat1,cant_total);
	porc_cat2 = calc_porc(cant_empl_cat2,cant_total);
	porc_cat3 = calc_porc(cant_empl_cat3,cant_total);
	porc_cat4 = calc_porc(cant_empl_cat4,cant_total);


	/* Output de data */
	printf("Consigna 1:\n");
	printf("\tCantidad empleados categoría 1: %d\n", cant_empl_cat1);
	printf("\tCantidad empleados categoría 2: %d\n", cant_empl_cat2);
	printf("\tCantidad empleados categoría 3: %d\n", cant_empl_cat3);
	printf("\tCantidad empleados categoría 4: %d\n", cant_empl_cat4);
	printf("Consigna 2:\n");
	printf("\tCantidad de empleados que cobran más de $2000: %d\n", sueldo_2k);
	printf("Consigna 3:\n");
	printf("\tCantidad de empleados categoría 1 que cobran más de $1000: %d\n",sueldo_1k_cat1);
	printf("Consigna 4:\n");
	printf("\tSueldo máximo y el empleado al que pertenece: %.2f - %s\n", sueldo_max, nombre_max);
	printf("\tSueldo mínimo y el empleado al que pertenece: %.2f - %s\n", sueldo_min, nombre_min);
	printf("Consigna 5:\n");
	if(cant_max !=0)
		printf("\tCategoría con más empleados: %d\n", cant_max);
	else
		printf("\tNo hay una única categoría con más empleados.\n");
	printf("Consiga 6:\n");
	printf("\tPorcentaje de empleados categoría 1 sobre el total: %.2f\%\n", porc_cat1);
	printf("\tPorcentaje de empleados categoría 2 sobre el total: %.2f\%\n", porc_cat2);
	printf("\tPorcentaje de empleados categoría 3 sobre el total: %.2f\%\n", porc_cat3);
	printf("\tPorcentaje de empleados categoría 4 sobre el total: %.2f\%\n", porc_cat4);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calc_porc() */
float calc_porc(float arg0, float arg1) {
	float res;
	res = arg0*100/arg1; 
	return res;
}
