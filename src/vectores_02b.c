/*
*
*	Título: EJERCICIOS DE VECTORES 02
*	Consigna: Ingresar datos y cargar un vector de 30 elementos, imprimir:
*	A. (x) Cantidad de valores positivos
*	B. (x) Cantidad de valores negativos
*	C. (x) Cantidad de ceros
*	D. (x) Promedio de los positivos
*	E. (x) Promedio general
*	Alumno: Nicolás Esteban Olmedo
*
*/

/************************************************************************************************************
 * To do: hacer un proc que permita modificar el array en main()
 * *********************************************************************************************************/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_VALUE 6
#define ARRAY_POS 4

/* Macros del procesador */

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_prom(float arg0, float arg1);
void clrscr(void);
void line(void);
void view_array(int *array, int valor_proc, int pos_proc, int i_proc);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int array[ARRAY_VALUE][ARRAY_POS] = {0};

	int i=0, valor=0;
	float prom_pos=0, prom_total=0;

	int *array_pointer = &array;

	/* Input de data */
	for(i=1;i<=ARRAY_VALUE-1;i++) {
//		printf("Posición: %d\n", i);
		printf("Ingresar valor: ");
		scanf("%d", &valor);
		
		if(valor<0) {
			view_array(*array_pointer, valor, 1, i);
			array[i][1]=valor;
			array[1][0]++;
			array[0][1]+=valor;
			printf("Valor: Array[%d][1]\n", i);
			printf("Contador: Array[1][0] = %d\n", array[1][0]);
			printf("Acumulador: Array[0][1] = %d\n", array[0][1]);
		}
		else if(valor==0) {
			array[i][2]=valor;
			array[2][0]++;
			array[0][2]+=valor;
			printf("Valor: Array[%d][2]\n", i);
			printf("Contador: Array[2][0] = %d\n", array[2][0]);
			printf("Acumulador: Array[0][2] = %d\n", array[0][2]);
		}
		else {
			array[i][3]=valor;
			array[3][0]++;
			array[0][3]+=valor;
			printf("Valor: Array[%d][3]\n", i);
			printf("Contador: Array[3][0] = %d\n", array[3][0]);
			printf("Acumulador: Array[0][3] = %d\n", array[0][3]);
		}
		printf("***\n");
	}

	/* Procesamiento de data */
	prom_pos = calc_prom(array[0][3],array[3][0]);
	prom_total = calc_prom((array[0][1]+array[0][2]+array[0][3]),(ARRAY_VALUE-1));

	/* Output de data */
	line();

	printf("Cantidad de valores positivos: %d\n", array[3][0]);
	printf("Cantidad de valores negativos: %d\n", array[1][0]);
	printf("Cantidad de ceros: %d\n", array[2][0]);
	printf("Promedio de los positivos: %.2f\n", prom_pos);
	printf("Promedio general: %.2f\n", prom_total);

	line();
	return 0;
}

/* Otras funciones */
	/* Definición de calc_prom() */
float calc_prom(float arg0, float arg1) {
	float res=0;
	res = arg0/arg1;
	return res;
}

	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() - Línea de asteriscos para separar el resultado */
void line(void) {
	int i = 0;
	for(i=0;i<=20;i++) {
		printf("***");
		if(i==20)
			printf("\n");
	}
}

	/* Definición de update_array() */
/*void update_array(int *array, int valor_proc, int pos_proc, int i) {
	array[i][pos_proc]=valor;
	array[pos_proc][0]++;
	array[0][pos_proc]+=valor;
	printf("Valor: Array[%d][1]\n", i);
	printf("Contador: Array[1][0] = %d\n", array[pos_proc][0]);
	printf("Acumulador: Array[0][1] = %d\n", array[0][pos_proc]);
} */

	/* Definición de view_array() */
void view_array(int array_pointer_proc, int valor_proc, int pos_proc, int i_proc) {
	printf("//////////////////////////////////////////////////////////");
	printf("Estoy en view_array");
	printf("Voy a imprimir lo que está en el array :)");

}
