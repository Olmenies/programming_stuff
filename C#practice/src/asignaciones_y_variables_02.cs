/*
 * Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos.
 */

using System;

namespace AsignacionesVariables02 {
	class Program {
		static void Main(string[] args) {
			int valorA, valorB, valorC, resultado;
			string tempVal;

			//Input de data
			Console.Write("Ingresar un valor A: ");
			tempVal = Console.ReadLine();
			valorA = Convert.ToInt32(tempVal);
			Console.WriteLine("valorA = " + valorA);


			Console.Write("Ingresar un valor B: ");
			tempVal = Console.ReadLine();
			valorB = Convert.ToInt32(tempVal);
			Console.WriteLine("valorB = " + valorB);

			Console.Write("Ingresar un valor C: ");
			tempVal = Console.ReadLine();
			valorC = Convert.ToInt32(tempVal);
			Console.WriteLine("valorC = " + valorC);

			//Procesamiento de data
			resultado = valorA + valorB;
			resultado += valorC;

			//Output de data
			Console.WriteLine("resultado = " + resultado);

		}
	}
}
