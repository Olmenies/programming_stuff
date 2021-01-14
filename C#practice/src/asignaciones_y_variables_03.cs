/*
 * Ingresar tres valores y sumarlos, se puede sumar de a varios operandos.
 */

using System;

namespace AsignacionesVariables03 {
	class Program {
		static void Main(string[] args) {
			int valorA, valorB, valorC, resultado;
			string tempVal;

			//Input de data
			Console.Write("Ingresar valor A: ");
			tempVal = Console.ReadLine();
			valorA = Convert.ToInt32(tempVal);
			Console.WriteLine(valorA);

			Console.Write("Ingresar valor B: ");
			tempVal = Console.ReadLine();
			valorB = Convert.ToInt32(tempVal);
			Console.WriteLine(valorB);

			Console.Write("Ingresar valor C: ");
			tempVal = Console.ReadLine();
			valorC = Convert.ToInt32(tempVal);
			Console.WriteLine(valorC);

			//Procesamiento de data
			resultado = valorA + valorB + valorC;

			//Output de data
			Console.WriteLine("resultado = " + resultado);


		}
	}
}
