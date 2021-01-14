/*
 * Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do.
 */

using System;

namespace AsignacionesVariables07 {
	class Program {
		static void Main(string[] args) {
			int valorA, valorB, suma, producto,resta;
			string tempVal;

			//Input de data
			Console.Write("Ingresar un entero: ");
			tempVal = Console.ReadLine();
			valorA = Convert.ToInt32(tempVal);

			Console.Write("Ingresar otro entero: ");
			tempVal = Console.ReadLine();
			valorB = Convert.ToInt32(tempVal);

			//Procesamiento de data
			suma = CalculoSuma(valorA, valorB);
			producto = CalculoProducto(valorA, valorB);
			resta = CalculoResta(valorA, valorB);

			//Output de data
			Console.WriteLine("Resultado de la suma: " + suma);
			Console.WriteLine("Resultado del producto: " + producto);
			Console.WriteLine("Resultado de la resta: " + resta);

		}

		static int CalculoSuma(int a, int b) {
			int tempRes = a + b;
			return tempRes;
		}

		static int CalculoResta(int a, int b) {
			int tempRes = a - b;
			return tempRes;

		}

		static int CalculoProducto(int a, int b) {
			int tempRes = a * b;
			return tempRes;
		}
	}
}
