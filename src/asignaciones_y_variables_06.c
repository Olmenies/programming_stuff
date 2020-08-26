/* 
*
*	Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 6
*	Consigna: Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <math.h>

/* Macros del procesador */

/* Definiciones globales */
	/* Definición de variables globales */

	/* Definición de prototipos de funciones */
void clrscr(void);
float calculo_hip(float arg0, float arg1);
float calculo_perim(float arg0, float arg1);
float calculo_area(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Definición de variables locales */
	float cateto0, cateto1, hipotenusa, perimetro, area;
	/* Input de data */
	printf("Insertar cateto menor: ");
	scanf("%f", &cateto0);
	printf("Insertar cateto mayor: ");
	scanf("%f", &cateto1);
	
	/* Procesamiento de data */
	hipotenusa = calculo_hip(cateto0, cateto1);
	perimetro = calculo_perim(cateto0, cateto1);
	area = calculo_area(cateto0, cateto1);
	
	/* Output de data */
	printf("Diagonal principal = %f\n Perímetro = %f\n Área = %f\n", hipotenusa, perimetro, area);
		return 0;
}
/* Otras funciones */
	/* Definición clrscr() */
void clrscr() {
	system("clear");
}
	/* Definición calculo_hip() */
float calculo_hip(float arg0, float arg1) {
	float res;
	res = sqrt(pow(arg0,2) + pow(arg1,2));
}

	/* Definición calculo_perim() */
float calculo_perim(float arg0, float arg1) {
	float res;
	res = arg0*2 + arg1*2;
	return res;
}

	/* Definición calculo_area() */
float calculo_area(float arg0, float arg1) {
	float res;
	res = arg0 * arg1;
	return res;
}
