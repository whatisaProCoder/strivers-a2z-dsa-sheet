package Step03_Arrays.Lec2_Medium;

// Rotate Matrix by 90 degrees
// Optimal Approach

public class Program_11_optimal {
    private void rotate(int[][] matrix) {
        int n = matrix.length;

        // Transpose the matrix
        // O(n/2 * n/2)
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Reverse the rows
        // O(n * n/2)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int n = 4;
        int[][] matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

        System.out.println("Before rotating...");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < 10)
                    System.out.print(matrix[i][j] + "  ");
                else
                    System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        new Program_11_optimal().rotate(matrix);

        System.out.println("After rotating...");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < 10)
                    System.out.print(matrix[i][j] + "  ");
                else
                    System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}

// Time-complexity  : O(n^2)
// Space-complexity : O(1)
