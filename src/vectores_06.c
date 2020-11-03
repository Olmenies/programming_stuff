/*
*
*	Título: EJERCICIOS DE VECTORES 06
*	Consigna: 6. Dadas las 40 notas y edades de los alúmnos de un colegio calcular
*	A. (x) Nota promedio
*	B. (x) Cantidad de alúmnos aplazados
*	C. (x) Cantidad de alúmnos promocionados
*	D. (x) Nota promedio de los alúmnos mayores a 15 años
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 3

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(float *array_notas, int *array_edades);
void calc_estado(float *array_notas, int *array_estado);
void calc_acum(float *array_notas, int *array_edades, float *acum_parcial, int *cont_parcial);
float calc_prom(float acum, float cant);
void output_data(float prom_general, int *array_estado, float prom_parcial);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int i=0, cont_parcial=0;
	float acum=0, prom_general=0, prom_parcial=0, acum_parcial=0;

	float array_notas[ARRAY_SIZE];
	int array_edades[ARRAY_SIZE];
	int array_estado[3] = {0};

	/* Input de data */
	input_data(array_notas, array_edades);

	/* Procesamiento de data */
	for(i=0; i<=ARRAY_SIZE-1; i++) {
		acum = acum + array_notas[i];
	}

	prom_general = calc_prom(acum, ARRAY_SIZE);

	calc_estado(array_notas, array_estado);
	calc_acum(array_notas, array_edades, &acum_parcial, &cont_parcial);

	prom_parcial=calc_prom(acum_parcial,cont_parcial);
		
	/* Output de data */
	output_data(prom_general, array_estado, prom_parcial);
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

/* Definición de input_data() */
void input_data(float *array_notas, int *array_edades) {
	int i=0;
	for(i=0; i<=ARRAY_SIZE-1; i++) {
		do {
			printf("Ingresar nota del alumno (%d restantes): ", ARRAY_SIZE-i);
			scanf("%f", &array_notas[i]);
			if((array_notas[i]>=1) && (array_notas[i] <= 10)) {
				break;
			} else {
				printf("Nota no válida, ingresar una nota del 1 al 10: \n");
			}
		} while((array_notas[i]<=1) || (array_notas[i] >= 10));
		printf("Ingresar edad del alumno (%d restantes): ", ARRAY_SIZE-i);
		scanf("%d", &array_edades[i]);
		printf("***\n");
	}
		line();
}

/* Definición de calc_estado() - Separa los alumnos en aplazados, reprobados y aprobados*/
void calc_estado(float *array_notas, int *array_estado) {
	int i=0;
	for(i=0; i<=ARRAY_SIZE-1; i++) {
		if(array_notas[i] < 4) {
			array_estado[0]++;
		} else if((array_notas[i] >= 4) && (array_notas[i] < 7)) {
			array_estado[1]++;
		} else {
			array_estado[2]++;
		}
	}
}

/* Definición de calc_prom() - Calcula el promedio de los números ingresados */
float calc_prom(float acum, float cant) {
	float res=0;
	res = acum/cant;
	return res;
}

/* Definición de calc_acum() - Calcula el acumulador según las condiciones */
void calc_acum(float *array_notas, int *array_edades, float *acum_parcial, int *cont_parcial) {
	int i=0, edad=0, conta_parcial=0;

	printf("Ingresar edad mínima a analizar: ");
	scanf("%d", &edad);

	for(i=0; i<=ARRAY_SIZE-1; i++) {
		if(array_edades[i] > edad) {
			*acum_parcial+=array_notas[i];
			*cont_parcial= *cont_parcial+1;
		}
	}
}

/* Definición de output_data() */
void output_data(float prom_general, int *array_estado, float prom_parcial) {
	line();
	printf("A. Promedio general: %.2f\n", prom_general);
	printf("B. Alumnos aplazados: %d\n", array_estado[0]);
	printf("B.5 Alumnos desaprobados:  %d\n", array_estado[1]);
	printf("C. Alumnos aprobados: %d\n", array_estado[2]);
	printf("D. Promedio alumno mayores a 15: %.2f\n", prom_parcial);
	line();
}
