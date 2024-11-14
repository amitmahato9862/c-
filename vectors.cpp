#include <iostream>
#include <vector>

using namespace std;

// Function to print the Sudoku grid
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a number can be placed in the given row, column
bool isSafe(const vector<vector<int>>& grid, int row, int col, int num) {
    // Check the row
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Check the column
    for (int x = 0; x < 9; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Check the 3x3 grid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(vector<vector<int>>& grid) {
    int row, col;
    bool emptyFound = false;

    // Find an empty space in the grid (represented by 0)
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0) {
                emptyFound = true;
                break;
            }
        }
        if (emptyFound) break;
    }

    // If there is no empty space, the puzzle is solved
    if (!emptyFound) return true;

    // Try numbers 1 to 9 for the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            // Recursively try to solve the rest of the puzzle
            if (solveSudoku(grid)) {
                return true;
            }

            // If placing num didn't work, reset the cell and backtrack
            grid[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

int main() {
    // Sudoku grid (0 means empty cell)
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Initial Sudoku Grid: " << endl;
    printGrid(grid);

    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku Grid: " << endl;
        printGrid(grid);
    } else {
        cout << "\nNo solution exists!" << endl;
    }

    return 0;
}
