//https://www.codechef.com/OCT19B/problems/SAKTAN      

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    
	    
		
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t > 0)
		{
			int rows, cols, queries, rowIndex, colIndex, res = 0;
			
			rows = sc.nextInt();
			cols = sc.nextInt();
			queries = sc.nextInt();
			
			int matrix[][] = new int[rows+1][cols+1];
			
			for(int i = 0; i < queries; i++)
			{
				rowIndex = sc.nextInt();
				colIndex = sc.nextInt();
				
				for(int j = 1; j <= cols ; j++)
					matrix[rowIndex][j]++;
				
				for(int k = 1; k <= rows ; k++)
					matrix[k][colIndex]++;
			}
			
			for(int i = 1; i <= rows; i++)
				for(int j = 1; j <= cols; j++)
					if(matrix[i][j] % 2 == 1)
						res++;
			
			System.out.println(res);
			
			t--;
		}
		

	
	}
}
