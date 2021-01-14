/*
 * Ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie.
 */

using System;

namespace AsignacionesVariables05 {
	class Program {
		static void Main(string[] args) {
			float ladoA, ladoB, hipotenusa, perimetro, superficie;
			string tempVal;

			//Input de data
			Console.Write("Ingresar lado A: ");
			tempVal = Console.ReadLine();
			ladoA = Convert.ToSingle(tempVal);


			Console.Write("Ingresar lado B: ");
			tempVal = Console.ReadLine();
			ladoB = Convert.ToSingle(tempVal);

			//Procesamiento de data
			hipotenusa = CalculoHipotenusa(ladoA, ladoB);
			perimetro = CalculoPerimetro(ladoA, ladoB, hipotenusa);
			superficie = CalculoSuperficie(ladoA, ladoB);

			//Output de data
			Console.WriteLine("Hipotenusa = " + hipotenusa);
			Console.WriteLine("Perímetro = " + perimetro);
			Console.WriteLine("Superficie = " + superficie);
		}

		private static float CalculoHipotenusa(float a, float b) {
			//Need help with this one
			float tempRes = (float)Math.Sqrt((float)Math.Pow(a,2) + (float)Math.Pow(b,2));
			return tempRes;
		}

		private static float CalculoPerimetro(float a, float b, float c) {
			float tempRes = a + b + c;
			return tempRes;
		}

		private static float CalculoSuperficie(float a, float b) {
			float tempRes = (a+b)/2;
			return tempRes;
		}
	}
}
