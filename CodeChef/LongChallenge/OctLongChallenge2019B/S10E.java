//https://www.codechef.com/OCT19B/problems/S10E
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		int t;
		
		t = sc.nextInt();
		
		while(t > 0)
		{
			
			int n = sc.nextInt(), price[] = new int[n], goodDays = 0;
			boolean goodFlag = true;
			
			for(int i = 0; i < n; i++)
				price[i] = sc.nextInt();
			
			for(int i = 0; i < n; i++)
			{	
				goodFlag = true;
				for(int j = i - 1; j >= i - 5 && j >= 0; j--)
					if(price[i] >= price[j])
					{
						goodFlag = false;
						break;
					}
				if(goodFlag)
					goodDays++;
			}
			
			System.out.println(goodDays);
			t--;
		}
		
	
	}
}
