/*
 * Una concesionaria de autos paga a cada vendedor $ 500 por mes más un plus del 10 % del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos, sólo vende un tipo de vehículo, calcular su sueldo.
 */

using System;

namespace AsignacionesVariables10 {
	class Program {
		static void Main(string[] args) {
			float sueldoBase = 500;
			float porcentajeComision = 10;
			float constanteComision = 50;

			int cantidadAutosVendidos;
			float sueldoFinal, precioAuto;
			string tempVal, legajo;

			/* Input de data*/
			Console.Write("Ingresar legajo: ");
			legajo = Console.ReadLine();

			Console.Write("Ingresar cantidad de autos vendidos: ");
			tempVal = Console.ReadLine();
			cantidadAutosVendidos = Convert.ToInt32(tempVal);

			Console.Write("Ingresar precio por unidad: ");
			tempVal = Console.ReadLine();
			precioAuto = Convert.ToSingle(tempVal);
			
			
			/* Procesamiento de data */
			sueldoFinal = CalculoSueldo(sueldoBase, porcentajeComision, constanteComision, cantidadAutosVendidos, precioAuto);

			/* Output de data */
			Console.WriteLine("Empleado: " + legajo + "\nSueldo final: " + sueldoFinal);
		}

		static float CalculoSueldo(float sbase, float porcentaje, float constante, float cant, float precio) {
			float tempRes = sbase + (precio * porcentaje / 100) * cant + constante * cant;
			return tempRes;
		}
	}
}
