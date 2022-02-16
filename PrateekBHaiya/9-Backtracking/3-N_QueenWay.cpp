#include <iostream>
using namespace std;
bool canplace(int board[][20], int n, int x, int y)
{
    // column
    for (int k = 0; k < x; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }
    // Left Diag
    int i = x;
    int j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }
    // Right Diag
    i = x;
    j = y;
    while (i >= 0 and j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}
void printBoard(int n, int board[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool solveNQueen(int n, int board[][20], int i)
{
    // base case
    if (i == n)
    {
        /* print the board*/
        printBoard(n, board);
        return true;
    }
    // rec case
    // try to place a queen in every row
    for (int j = 0; j < n; j++)
    {
        /* whether the current i,j is safe or not */
        if (canplace(board, n, i, j))
        {
            board[i][j] = 1;
            bool success = solveNQueen(n, board, i + 1);
            if (success)
            {
                return true;
            }
            // backtrack(need to update)
            board[i][j] = 0;
        }
    }
    return false;
}
int main()
{
    int board[20][20] = {0};
    int n;
    cin >> n;
    bool check = solveNQueen(n, board, 0);
    if (!check)
    {
        cout << "NO solution";
    }

    return 0;
}