//
// Created by Kartik Mohan on 07/06/26.
//

#include "ValidSudoku.h"

#include <iostream>
#include <ostream>

void ValidSudoku::run() {
    std::vector<std::vector<char>> board;
    board.resize(9);
    board[0] = {'5','3','.','.','7','.','.','.','.'};
    board[1] = {'6','.','.','1','9','5','.','.','.'};
    board[2] = {'.','9','8','.','.','.','.','6','.'};
    board[3] = {'8','.','.','.','6','.','.','.','3'};
    board[4] = {'4','.','.','8','.','3','.','.','4'};
    board[5] = {'7','.','.','.','2','.','.','.','6'};
    board[6] = {'.','6','.','.','.','.','2','8','.'};
    board[7] = {'.','.','.','4','1','9','.','.','5'};
    board[8] = {'.','.','.','.','8','.','.','7','9'};
    std::cout << isValidSudoku(board) << std::endl;
}

bool ValidSudoku::isValidSudoku(std::vector<std::vector<char> > &board) {
    for (int i = 0; i < 9; i++) {
        std::vector<bool> row(9, false);
        std::vector<bool> col(9, false);
        std::vector<bool> box(9, false);
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.') {
                int num = board[i][j] - '1';
                if (row[num]) return false;
                row[num] = true;
            }
            if (board[j][i] != '.') {
                int num = board[j][i] - '1';
                if (col[num]) return false;
                col[num] = true;
            }
            int boxRow = 3 * (i / 3) + j / 3;
            int boxCol = 3 * (i % 3) + j % 3;
            if (board[boxRow][boxCol] != '.') {
                int num = board[boxRow][boxCol] - '1';
                if (box[num]) return false;
                box[num] = true;
            }
        }
    }
    return true;
}
