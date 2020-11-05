/*
*
*	Título: TP DE VECTORES 01 
*	Consigna: 1. Ingresar datos y cargar un vector de 50 elementos, calcular
*	A. (x) la suma de todos los elementos
*	B. (x) El producto de todos los elementos
*	C. (x) Mostrar del vector el elemento 50 al 1
*	D. (x) Imprimir las componentes de indice par
*	E. (x) Imprimir las componentes de indice impar
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int acum_suma=0, acum_prod=1, i=0;

	int array_size=5;
	int array[array_size];

	/* Input de data */
        for(i=0;i<=array_size-1;i++) {
                printf("Posición: %d\n", i);
                printf("Ingresar un valor: ");
                scanf("%d",&array[i]);
                printf("Valor: %d\n", array[i]);
                acum_suma+=array[i];
		acum_prod=acum_prod*array[i];
		printf("***\n");
        }

	/* Procesamiento de data */
	/* Output de data */
	line();

	printf("A. Sumatoria de los números ingresados: %d\n", acum_suma);
	printf("B. Producto de los números ingresados: %d\n", acum_prod);
	printf("C. Elementos del %d al 1:\n", array_size);
	for(i=array_size-1;i>=1;i--) {
		printf("\tElemento[%d] = %d\n", i, array[i]);
	}

	printf("D. Imprimir las componentes de índice par: \n");
	for(i=0;i<=array_size-1;i++) {
		if(i%2 == 0) {
			printf("\tElemento[%d] = %d\n", i, array[i]);
		}
	}

	printf("E. Imprimir las componentes de índice impar: \n");
	for(i=0;i<=array_size-1;i++) {
		if(i%2 != 0) {
			printf("\tElemento[%d] = %d\n", i, array[i]);
		}
	}
	
	line();
	
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() - Línea de asteriscos separadora */
void line(void) {
	int i=0;
	for(i=0;i<=20;i++) {
		printf("**");
		if(i==20) {
			printf("\n");
		}
	}
}
