//https://leetcode.com/contest/weekly-contest-99/problems/surface-area-of-3d-shapes/

#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int size = grid.size();
        int area = 0;
        
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                area += 6*grid[i][j];
                
                //check bottom overlap
               if(j < size-1)
                {
                    grid[i][j] <= grid[i][j+1] ? (area -= grid[i][j]) : (area -= grid[i][j+1]);
                }
                
                //check top overlap
                if(j > 0)
                {
                    grid[i][j] <= grid[i][j-1] ? (area -= grid[i][j]) : (area -= grid[i][j-1]);
                }
                
                //check right overlap
                if(i < size-1)
                {
                    grid[i][j] <= grid[i+1][j] ? (area -= grid[i][j]) : (area -= grid[i+1][j]);
                }
                
                 //check left overlap
                if(i > 0)
                {
                    grid[i][j] <= grid[i-1][j] ? (area -= grid[i][j]) : (area -= grid[i-1][j]);
                }
                
                
                if(grid[i][j] != 0)
                    area -= 2*(grid[i][j]-1);
                
                 
                
                
                
            }
        }
        return area;
    }
};