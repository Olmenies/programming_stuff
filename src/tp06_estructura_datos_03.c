/*
*
*	Título: TP 7 ESTRUCTURAS DE DATOS #2 03
*	Consigna: 3. Ingresar 10 sueldos y edades de una empresa y calcular
*	A. () Sueldo promedio
*	B. () Sueldo promedio de los empleados que tienen entre 23 y 40 años
*	C. () Edad promedio
*	D. () Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
*	E. () Cantidad de empleados con edades menor a la edad promedio
*	Alumno: Nicolás Esteban Olmedo 
*
*/

//¿Es la mejor opción para resolver este ejercicio usar un vector bidimensional? Obviamente no, pero hay que practicar. Mildis.

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 4


/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

void calc_prom(float arg0, float arg1, float *res);
void bubblesort(int *edades, int *vector_asociado);

void input_data(int *edades, float *sueldos);
void output_data(float *sueldos);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int opcion=0, i=0;
	float res=0;

	float sueldos[ARRAY_SIZE] = {0};
	int edades[ARRAY_SIZE] = {0};
	int vector_asociado[ARRAY_SIZE] = {0};

	/* Menu */
		/* Input de data */
		input_data(edades, sueldos);
		bubblesort(edades, vector_asociado);
		/* Procesamiento de data */
		/* Output de data */
		for(i=0; i<ARRAY_SIZE; i++){
			printf("sueldos[%d] = %.2f\n", i, sueldos[i]);
		}
		for(i=0; i<ARRAY_SIZE; i++){
			printf("edades[%d] = %d\n", i, edades[i]);
		}
		for(i=0; i<ARRAY_SIZE; i++){
			printf("vector_asociado[%d] = %d\n", i, vector_asociado[i]);
		}

//		output_data(sueldos);
		

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

	/* Definición de pausa() */
void pausa(void) {
	printf("Ingresá enter para continuar...");
	getchar();
	getchar();
}

	/* Definición de input_data() */
void input_data(int *edades, float *sueldos) { 
	int i=0;
	for(i=1; i<ARRAY_SIZE; i++) {
		line();
		printf("Empleado: %d\n", i);
		line();
		printf("Ingresar sueldo del empleado %d: ", i);
		scanf("%f", &sueldos[i]);
		printf("sueldos[%d] = %.2f\n", i, sueldos[i]);
		printf("Ingesar edad del empleado %d: ", i);
		scanf("%d", &edades[i]);
		printf("edades[%d] = %d\n", i, edades[i]);
	}
}

	/* Definición de output_data()*/
void output_data(float *sueldos){
	int i=0;
	for(i=0; i<ARRAY_SIZE; i++){
		printf("sueldos[%d] = %.2f\n", i, sueldos[i]);
	}
}

	/* Definición de calc_prom() */
//void calc_prom(float arg0, float arg1, float *res) {
//	float res=0;
//	*res = arg0/arg1;
//}

	/* Definición de bubblesort() */
void bubblesort(int *edades, int *vector_asociado){
	int i=0, j=0, aux=0;
	for(i=0; i<ARRAY_SIZE; i++) {
		vector_asociado[i] = i;
	}
	for(i=1; i<ARRAY_SIZE-1; i++){
		for(j=1; j<ARRAY_SIZE-1; j++){
			if(edades[vector_asociado[j]] > edades[vector_asociado[i]]) {
				aux = vector_asociado[j];
				vector_asociado[j] = vector_asociado[i];
				vector_asociado[i] = aux;
			}
		}
	}
}

