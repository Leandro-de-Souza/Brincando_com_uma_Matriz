import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, linha, coluna;
	    double somaposi;

	    System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();
		
		double[][] mat = new double[N][N];
		
		for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
            	System.out.print("Elemento [" + i + "," + j + "]: ");
            	mat[i][j] = sc.nextDouble();
            }
		}
	    
		somaposi = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (mat[i][j] > 0) {
                    somaposi = somaposi + mat[i][j];
                }
            }
        }
        
        System.out.println();
        System.out.println("SOMA DOS POSITIVOS: " + somaposi);
        System.out.println();
        
        System.out.print("Escolha uma linha: ");
        linha = sc.nextInt();
        
        System.out.print("LINHA ESCOLHIDA: ");
        for (int j = 0; j < N; j++) {
        	System.out.print(String.format("%.1f", mat[linha][j]) + "  ");
        }
        
        System.out.println();
        System.out.println();
        System.out.print("Escolha uma coluna: ");
        coluna = sc.nextInt();
        
        System.out.print("COLUNA ESCOLHIDA: ");
        for (int i = 0; i < N; i++) {
        	System.out.print(String.format("%.1f", mat[i][coluna]) + "  ");
        }
        	
        System.out.println();
        System.out.println();
        System.out.println("DIAGONAL PRINCIPAL: ");
        for (int i = 0; i < N; i++) {
        	System.out.print(String.format("%.1f", mat[i][i]) + "  ");
        }
        
        System.out.println();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 if (mat[i][j] < 0) {
                    mat[i][j] = mat[i][j] * mat[i][j];
                 }
            }
       }
        
        System.out.println();
        System.out.println("MATRIZ ALTERADA:");
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
            	System.out.print(String.format("%.1f", mat[i][j]) + "  ");
            }
            System.out.println();
        }
        
        sc.close();
	}

}
