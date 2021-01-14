/* 
*
*	Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES
*	Consigna: Ingresar el tiempo trabajado por un operario y si el valor de la hora es de 10 pesos, calcular su sueldo.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
/* Macros del preprocesador */

/* Definiciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int calculo_sueldo(int arg0, int arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaración de variables locales */
	
	/* Input de data */
	int codigo_oper;
	int cant_hora, valor_hora, sueldo;
	printf("Ingresar código de empleado: ");
	scanf("%d", &codigo_oper);
	printf("Ingresar cantidad de horas trabajadas: ");
	scanf("%d", &cant_hora);
	printf("Ingresar valor de la hora trabajada: ");
	scanf("%d", &valor_hora);
	
	/* Procesamiento de data */
	if(valor_hora == 10) {
		sueldo = calculo_sueldo(cant_hora, valor_hora);
	}
	/* Output de data */
	if(valor_hora == 10) {
		printf("Sueldo del empleado %i: $%d\n", codigo_oper, sueldo);
	} else {
		puts("El valor de la hora no es 10");
	}
	return 0;
}
/* Otras funciones */
	/* Declaración de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Declaración de calculo_sueldo() */
int calculo_sueldo(int arg0, int arg1) {
	int res;
	res = arg0 * arg1;
	return res;
}
