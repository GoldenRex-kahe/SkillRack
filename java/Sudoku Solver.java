class Solution {
    private int SMS = 3;

    private int[] getFreeCell(char[][] board) {
        int R = 9;
        int C = 9;
        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                if (board[row][col] == '.') {
                    return new int[]{row, col};
                }
            }
        }
        return new int[]{-1, -1};
    }

    private boolean solve(char[][] board, boolean[][] rf, boolean[][] cf, boolean[][] smf) {
        int[] cell = getFreeCell(board);
        int row = cell[0];
        int col = cell[1];
        if (row == -1 && col == -1) {
            return true;
        }
        int smi = (row / SMS) * SMS + (col / SMS);
        for (int dig = 1; dig <= 9; dig++) {
            if (rf[row][dig] || cf[col][dig] || smf[smi][dig]) {
                continue;
            }
            board[row][col] = (char) ('0' + dig);
            rf[row][dig] = true;
            cf[col][dig] = true;
            smf[smi][dig] = true;

            if (solve(board, rf, cf, smf)) {
                return true;
            }

            board[row][col] = '.';
            rf[row][dig] = false;
            cf[col][dig] = false;
            smf[smi][dig] = false;
        }
        return false;
    }

    public void solveSudoku(char[][] board) {
        int R = board.length;
        int C = board[0].length;
        boolean[][] rf = new boolean[R][10];
        boolean[][] cf = new boolean[C][10];
        boolean[][] smf = new boolean[9][10];

        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                if (board[row][col] != '.') {
                    int dig = board[row][col] - '0';
                    int smi = (row / SMS) * SMS + (col / SMS);
                    rf[row][dig] = true;
                    cf[col][dig] = true;
                    smf[smi][dig] = true;
                }
            }
        }
        solve(board, rf, cf, smf);
    }
}