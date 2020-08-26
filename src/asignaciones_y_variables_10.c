/*
*
*	Título: EJERCICIOES DE VARIABLES Y ASIGNACIONES
*	Consigna: Una concesionaria de autos paga a cada vendedor $ 500 por mes más un plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos, sólo vende un tipo de vehículo, calcular su sueldo.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Definiciones globales */
	/* Declaración de variables principales */
	/* Declaración de prototipos de funciones */
void clrscr();
float calculo_sueldo(int valor, int cantidad);

/* Función principal */
int main() {
	clrscr();
	
	/* Declaración de variables locales */
	int codigo_emp, cant_autos_vendidos, valor_autos_vendidos, sueldo;
	
	/* Input de data */
	printf("Ingresar código del empleado: ");
	scanf("%d", &codigo_emp);
	printf("Ingresar cantidad de autos vendidos: ");
	scanf("%d", &cant_autos_vendidos);
	printf("Ingresar valor de los autos vendidos: ");
	scanf("%d", &valor_autos_vendidos);
	
	/* Procesamiento de data */
	sueldo = calculo_sueldo(valor_autos_vendidos, cant_autos_vendidos);
	
	/* Output de data */
	printf("Sueldo del empleado %d: $%d\n", codigo_emp, sueldo);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calculo_sueldo() */
float calculo_sueldo(int valor, int cantidad) {
	float res;
	res = 500 + valor*0.1*cantidad + 50*cantidad;
	return res;
}
