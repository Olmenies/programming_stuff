/*
 * Ingresar el tiempo trabajado por un operario y si el valor de la hora es de 10 pesos, calcular su sueldo.
 */

using System;

namespace AsignacionesVariables09 {
	class Program {
		static void Main(string[] args) {
			int cantidadHoras;
			float valorHora, sueldo;
			string tempVal, legajo;

			/* Input de data */
			Console.Write("Ingresar legajo: ");
			legajo = Console.ReadLine();

			Console.Write("Ingresar valor de la hora: ");
			tempVal = Console.ReadLine();
			valorHora = Convert.ToSingle(tempVal);

			Console.Write("Ingresar cantida de horas trabajadas: ");
			tempVal = Console.ReadLine();
			cantidadHoras = Convert.ToInt32(tempVal);

			/* Procesamiento de data */
			if(valorHora == 10) {
				sueldo = CalculoSueldo(cantidadHoras, valorHora);
				Console.WriteLine("Sueldo de " + legajo + ": " + sueldo);
			} else {
				Console.WriteLine("Valor hora != 10");
			}
		}

		static float CalculoSueldo(int cantidad, float valor) {
			float tempRes = cantidad * valor;
			return tempRes;
		}

	}
}
