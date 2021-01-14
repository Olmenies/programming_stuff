/*
 * Ingresar dos valores enteros y sumarlos.
 */

using System;

namespace AsignacionesVariables01 {
	class Program {
		static void Main(string[] args) {
			int valorA, valorB;
			string temp;

			Console.Write("Ingresar valor A: ");
			//Ingresa el valor como un string
			temp = Console.ReadLine(); 
			//Convierte el valor a entero
			valorA = Convert.ToInt32(temp);
			Console.WriteLine("valorA = " + valorA);

			Console.Write("Ingresar valor B: ");
			//Ingresa el valor como un string
			temp = Console.ReadLine();
			//Convierte el valor a entero
			valorB = Convert.ToInt32(temp);
			Console.WriteLine("valorB = " + valorB);

			int resultado = valorA + valorB;
			Console.WriteLine(resultado);
		}
	}
}
