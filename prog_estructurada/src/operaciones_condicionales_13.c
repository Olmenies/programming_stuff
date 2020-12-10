/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES
*	Consigna: Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo si se sabe que los de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80. 
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int calc_sueldo(int arg0, int arg1);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int cat,cod_empleado,horas_trabajadas,val_hora,sueldo;

	/* Input de data */
	printf("Ingresar categoría del empleado: ");
	scanf("%d", &cat);
	printf("Ingresar código del empleado: ");
	scanf("%d",&cod_empleado);
	printf("Ingresar cantidad de horas trabajadas: ");
	scanf("%d", &horas_trabajadas);

	/* Procesamiento de data */
	switch(cat) {
		case 1:
			val_hora = 50;
			break;
		case 2:
			val_hora = 70;
			break;
		case 3:
			val_hora = 80;
			break;
		default:
			val_hora = 0;
			break;
	}
	
	sueldo = calc_sueldo(horas_trabajadas, val_hora);

	/* Output de data */

	if (sueldo != 0) {
		printf("Sueldo empleado %d: %d\n", cod_empleado, sueldo );
	} else {
		printf("Categoría no válida.\n");
	}

	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr() {
	system("clear");
}
	/* Definición calc_sueldo */
int calc_sueldo(int arg0, int arg1) {
	int res;
	res = arg0*arg1;
	return res;
}
