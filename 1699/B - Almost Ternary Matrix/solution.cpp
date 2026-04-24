#include <bits/stdc++.h>
 
using namespace std;
 
 
 
void print(vector<vector<int>> &matrix)
{
      for (auto &i : matrix)
      {
            for (auto &j : i)
            {
                  cout << j << " ";
            }
            cout << endl;
      }
}
 
void solve(vector<vector<int>> &grid)
{
       int n = grid.size();
    int m = grid[0].size();
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if ((i / 2 + j / 2) % 2 == 0)
                    grid[i][j] = (i % 2 == j % 2);
                else
                    grid[i][j] = (i % 2 != j % 2);
        }
    }
      
}
 
int main()
{
      int t;
      cin >> t;
 
      while (t--)
      {
            int row, col;
            cin >> row >> col;
            vector<vector<int>> grid(row, vector<int>(col, -1));
 
            solve(grid);
            print(grid);
      }
 
      return 0;
}