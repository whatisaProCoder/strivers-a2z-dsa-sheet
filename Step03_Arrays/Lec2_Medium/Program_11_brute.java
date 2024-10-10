package Step03_Arrays.Lec2_Medium;

// Rotate Matrix by 90 degrees
// Brute Force Approach

public class Program_11_brute {
    private void rotate(int[][] matrix) {
        int n = matrix.length;
        int[][] ans = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][n - i - 1] = matrix[i][j];
            }
        }

        // Copying the elements from ans to matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = ans[i][j];
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

        new Program_11_brute().rotate(matrix);

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
// Space-complexity : O(n^2)
