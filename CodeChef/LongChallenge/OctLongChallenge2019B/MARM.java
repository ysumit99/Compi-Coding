//https://www.codechef.com/OCT19B/problems/MARM
//Wrong Answer
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{

	public static void main(String[] args) throws java.lang.Exception {
		
		/* Brute force */
		
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t > 0)
		{
			int n, a, b;
			long k;
			
			n = sc.nextInt();
			k = sc.nextLong();
			
			Integer arr[] = new Integer[n];
			
			for(int i = 0; i < n; i++)
				arr[i] = sc.nextInt();
			
			for(int i = 0; i < k % (3*n); i++)
				{
					arr[i%n] ^= arr[n-(i%n)-1];
					
				
				}
			
			if(k >= n/2 && n % 2 == 1)
			    arr[n/2] = 0;
			printArray(arr);
			
			t--;
			

		}
		

	}

	private static void printArray(Integer[] arr) {
		
		//System.out.print("At k = " + k + " array => " + "          ");
		for(Integer i : arr)
			System.out.print(i + " ");
		System.out.println();
	}

}
