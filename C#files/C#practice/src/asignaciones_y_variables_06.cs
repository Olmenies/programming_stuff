/*
 * Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro.
 */

using System;

namespace AsignacionesVariables06 {
	class Program {
		static void Main(string[] args) {
			float ladoA, ladoB, hipotenusa, superficie, perimetro;
			string tempVal;

			//Input de data
			Console.Write("Ingresar base: ");
			tempVal = Console.ReadLine();
			ladoA = Convert.ToSingle(tempVal);

			Console.Write("Ingresar altura: ");
			tempVal = Console.ReadLine();
			ladoB = Convert.ToSingle(tempVal);

			//Procesamiento de data
			hipotenusa = CalculoHipotenusa(ladoA, ladoB);
			perimetro = CalculoPerimetro(ladoA, ladoB, hipotenusa);
			superficie = CalculoSuperficie(ladoA, ladoB);

			//Output de data
			Console.WriteLine("Diagonal principal = " + hipotenusa);
			Console.WriteLine("Perimetro = " + perimetro);
			Console.WriteLine("Superficie = " + superficie);
		}

		private static float CalculoHipotenusa(float a, float b) {
			float tempRes = (float)Math.Sqrt( (float)Math.Pow(a,2) + (float)Math.Pow(b,2));
			return tempRes;
		}

		private static float CalculoPerimetro(float a, float b, float c) {
			float tempRes = a + b + c;
			return tempRes;
		}

		private static float CalculoSuperficie(float a, float b) {
			float tempRes = a*b;
			return tempRes;
		}
	}
}
