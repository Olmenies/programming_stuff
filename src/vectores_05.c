/*
*
*	Título: TP DE VECTORES 05
*	Consigna: 5. Ingresar 10 sueldos y edades de una empresa y calcular
*	A. (o) Sueldo promedio
*	B. () Sueldo promedio de los empleados que tienen entre 23 y 40 años
*	C. () Edad promedio
*	D. () Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000
*	E. () Cantidad de empleados con edades menor a la edad promedio
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 4

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

int calc_acum(int *array_sueldos);
float calc_prom(float acum, float cant);
void input_data(int *array_edades, int *array_sueldos);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int acum=0, contd=0, conte=0;
	float proma=0, promb=0, promc=0;
	int array_edades[ARRAY_SIZE];
	int array_sueldos[ARRAY_SIZE];

	/* Input de data */
	input_data(array_edades, array_sueldos);

	/* Procesamiento de data */
	calc_acum(array_sueldos);
	acum=array_sueldos[0];
	proma = calc_prom(acum, ARRAY_SIZE-1);
	printf("proma = %.2f\n", proma);

	/* Output de data */
	line();
	line();
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() */
void line(void) {
	int i=0;
	for(i=0; i<=20; i++) {
		printf("***");
	}
	printf("\n");
}

int calc_acum(int *array_sueldos) {
	int i=0;
	for(i=1; i<=ARRAY_SIZE-1; i++) {
		array_sueldos[0]+=array_sueldos[i];
//		printf("acumi=%d\n", array_sueldos[0]);
	}
}

	/* Definición de calc_prom */
float calc_prom(float acum, float cant) {
	float res=0;
	res = acum/cant;
	return res;
}

	/* Definición de input_data() */
void input_data(int *array_edades, int *array_sueldos) {
	int i=0;
	for(i=1; i<=ARRAY_SIZE-1; i++) {
		printf("Ingresar edad del empleado (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array_edades[i]);
		printf("Ingresar sueldo del empleado (%d restantes): $", ARRAY_SIZE-i);
		scanf("%d", &array_sueldos[i]);
	}
}
