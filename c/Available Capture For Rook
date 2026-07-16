int numRookCaptures(char** board, int boardSize, int* boardColSize) {
    int rookRow = 0;
    int rookCol = 0;
    int captures = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardColSize[i]; j++) {
            if (board[i][j] == 'R') {
                rookRow = i;
                rookCol = j;
            }
        }
    }
    int rowMove[] = {-1, 1, 0, 0};
    int colMove[] = {0, 0, -1, 1};
    for (int direction = 0; direction < 4; direction++) {
        int row = rookRow + rowMove[direction];
        int col = rookCol + colMove[direction];
        while (row >= 0 && row < boardSize &&
               col >= 0 && col < boardColSize[row]) {
            if (board[row][col] == 'B') {
                break;
            }
            if (board[row][col] == 'p') {
                captures++;
                break;
            }
            row += rowMove[direction];
            col += colMove[direction];
        }
    }
    return captures;
}
