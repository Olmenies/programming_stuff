/*
 * Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo.
 */

using System;

namespace AsignacionesVariables08 {
	class Program {
		static void Main(string[] args) {
			int cantidadHoras;
			float valorHora, sueldo;
			string tempVal, legajo;

			/* Input de data */

			Console.Write("Ingresar legajo del empleado: ");
			legajo = Console.ReadLine();

			Console.Write("Ingresar el valor de la hora: ");
			tempVal = Console.ReadLine();
			valorHora = Convert.ToSingle(tempVal);

			Console.Write("Ingresar cantidad de horas trabajadas: ");
			tempVal = Console.ReadLine();
			cantidadHoras = Convert.ToInt32(tempVal);

			/* Procesamiento de data */
			sueldo = CalculoSueldo(valorHora,cantidadHoras);

			/* Output de data */
			Console.WriteLine("Sueldo del empleado " + legajo + ": $" + sueldo);
		}

		static private float CalculoSueldo(float valor, int cantidad) {
			float tempRes = valor * cantidad;
			return tempRes;
		}
	}
}
