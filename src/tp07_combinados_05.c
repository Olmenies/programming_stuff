/*
*
*	Título: TP 07 EJERCICIOS COMBINADOS
*	Consigna: 5. Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin de mes cada analista eleva una planilla con los siguientes datos
	. Número de analista
	. Número de proyecto
	. Cantidad de hs trabajadas
En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se desea saber:
	A. () Cantidad de hs. trabajadas en total por cada analista.
	B. () Total de horas trabajadas por cada analista en cada proyecto.
	C. () Total de hs trabajadas sobre cada proyecto.
	D. () Qué analista trabajó menos en el proyecto 1.
	E. () Sueldo de cada analista.
	F. () Nombre del analista que cobró más.
	G. () Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
	H. () Imprimir ordenado en forma descendente por sueldo de los analista:
		H.1 () Nombre valor de la hora y sueldo --> ???
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ANALISTAS 3
#define PROYECTOS 5

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

void input_data(int **matriz_analista_proyecto);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */

	/* Matriz para llevar la cantidad de horas que laburó cada analista en cada proyecto.
	 * matriz_analista_proyecto[0][i] -> Horas totales trabajadas en el proyecto
	 * matriz_analista_protectuo[i][0] -> Horas totales trabajadas por el analista */
	int matriz_analista_proyecto[ANALISTAS][PROYECTOS] = {0};

	/* Input de data */
	input_data(matriz_analista_proyecto);
	/* Procesamiento de data */
	/* Output de data */
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

	/* Deinición de pausa() */
void pausa(void) {
	printf("Ingresar enter para continuar...");
	getchar();
	getchar();
}
	
	/* Definición de input_data() */
void input_data(int **matriz_analista_proyecto) {
	printf("Holiwis dicen los kiwis\n");
}

