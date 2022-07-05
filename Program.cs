using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_MATRIZ_GERAL {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, linha, coluna;
            double somaposi;

            Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            double[,] mat = new double[N, N];

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = double.Parse(Console.ReadLine(), CI);
                }
            }

            somaposi = 0;

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (mat[i, j] > 0) {
                        somaposi = somaposi + mat[i, j];
                    }
                }
            }

            Console.WriteLine();
            Console.WriteLine("SOMA DOS POSITIVOS: " + somaposi.ToString("F1", CI));
            Console.WriteLine();

            Console.Write("Escolha uma linha: ");
            linha = int.Parse(Console.ReadLine());

            Console.Write("LINHA ESCOLHIDA: ");
            for (int j = 0; j < N; j++) {
                Console.Write(mat[linha, j].ToString("F1", CI) + "  ");
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.Write("Escolha uma coluna: ");
            coluna = int.Parse(Console.ReadLine());

            Console.Write("COLUNA ESCOLHIDA: ");
            for (int i = 0; i < N; i++) {
                Console.Write(mat[i, coluna].ToString("F1", CI) + "  ");
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.Write("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < N; i++) {
                Console.Write(mat[i, i].ToString("F1", CI) + "  ");
            }

            Console.WriteLine();
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (mat[i, j] < 0) {
                        mat[i, j] = mat[i, j] * mat[i, j];
                    }
                }
            }

            Console.WriteLine();
            Console.WriteLine("MATRIZ ALTERADA:");

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    Console.Write(mat[i, j].ToString("F1", CI) + "  ");
                }
                Console.WriteLine();
            }

        }
    }
}
