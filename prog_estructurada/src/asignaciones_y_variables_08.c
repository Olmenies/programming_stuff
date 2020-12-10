/*
*
*	Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 08
*	Consigna: Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */

/* Definiciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void	clrscr(void);
float calculo_sueldo(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Ddefiniciones locales */
	int codigo_oper;
	float cant_hora, valor_hora, sueldo;
	/* Input de data */
	printf("Ingresar código de operario: ");
	scanf("%d", &codigo_oper);
	printf("Ingresar cantidad de horas trabajadas: ");
	scanf("%f", &cant_hora);
	printf("Ingresar valor de cada hora trabajada: ");
	scanf("%f", &valor_hora);
	
	/* Procesamiento de data */
	sueldo = calculo_sueldo(cant_hora, valor_hora);
	
	/* Output de data */
	printf("El sueldo del empleado %d es: $%.2f\n", codigo_oper, sueldo);
	return 0;
}
/*Otras funciones */
	/* Declaración clrscr() */
void clrscr() {
	system("clear");
}

	/* Declaración calculo_sueldo() */
float calculo_sueldo(float arg0, float arg1) {
	float res;
	res = arg0 * arg1;
	return res;
}
