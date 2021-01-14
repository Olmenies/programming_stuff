/*
 * Ingresar los lados de un triángulo calcular su perímetro.
 */

using System;

namespace AsignacionesVariables04
{
	class Program {
		static void Main(string[] args)	{
			int ladoA, ladoB, ladoC, perimetro;
			string tempVal;

			 //Input de data
			 Console.Write("Ingresar lado A: ");
			 tempVal = Console.ReadLine();
			 ladoA = Convert.ToInt32(tempVal);
			 

			 Console.Write("Ingresar lado B: ");
			 tempVal = Console.ReadLine();
			 ladoB = Convert.ToInt32(tempVal);

			 Console.Write("Ingresar lado C: ");
			 tempVal = Console.ReadLine();
			 ladoC = Convert.ToInt32(tempVal);

			 //Procesamiento de data
			 perimetro = CalculoPerimetro(ladoA, ladoB, ladoC);

			 //
			Console.WriteLine("perimetro = " + perimetro);
			 
		}

		private static int CalculoPerimetro(int a, int b, int c) {
			int tempRes = a + b + c;
			return tempRes;
		}
	}
}
