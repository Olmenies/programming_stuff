/*
* 
* Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 5
* Consigna: Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <math.h>

/* Macros del procesador */
/* Definiciones globales */
	/* Declaración de variables globales */
	/* Declaración de funciones */
void clrscr(void);
float calculo_hip(float arg0, float arg1);
float calculo_perim(float arg0, float arg1, float arg2);
float calculo_area(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaración de variables locales */
	float cateto0, cateto1, hipotenusa, perimetro, area;
	
	/* Input de data */
	printf("Introducir cateto los dos catetos: ");
	scanf("%f" "%f", &cateto0, &cateto1);
	
	/* Procesamiento de data */
	hipotenusa = calculo_hip(cateto0, cateto1);
	perimetro = calculo_perim(cateto0, cateto1, hipotenusa);
	area = calculo_area(cateto0, cateto1);
	
	/* Output de data */
	printf("Hipotenusa = %f\nPerímetro = %f\nArea = %f\n", hipotenusa, perimetro, area);
	return 0;
	
}
/* Otras funciones */
	/* Definición clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición calculo_hip() */
float calculo_hip(float arg0, float arg1) {
	float res;
	res = sqrt(pow(arg0,2)+pow(arg1,2));
	return res;
}

float calculo_perim(float arg0, float arg1, float arg2) {
	float res;
	res = arg0 + arg1 + arg2;
	return res;
}

float calculo_area(float arg0, float arg1) {
	float res;
	res = (arg0*arg1)/2;
	return res;
}
