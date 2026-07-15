class Solution {
    public boolean isValidSudoku(char[][] board) {
        for (int row = 0; row < 9; row++) {
            boolean[] used = new boolean[10];
            for (int col = 0; col < 9; col++) {
                char value = board[row][col];
                if (value != '.') {
                    int number = value - '0';
                    if (used[number]) {
                        return false;
                    }
                    used[number] = true;
                }
            }
        }
        for (int col = 0; col < 9; col++) {
            boolean[] used = new boolean[10];
            for (int row = 0; row < 9; row++) {
                char value = board[row][col];
                if (value != '.') {
                    int number = value - '0';
                    if (used[number]) {
                        return false;
                    }
                    used[number] = true;
                }
            }
        }
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                boolean[] used = new boolean[10];
                for (int row = boxRow; row < boxRow + 3; row++) {
                    for (int col = boxCol; col < boxCol + 3; col++) {
                        char value = board[row][col];
                        if (value != '.') {
                            int number = value - '0';
                            if (used[number]) {
                                return false;
                            }
                            used[number] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
}