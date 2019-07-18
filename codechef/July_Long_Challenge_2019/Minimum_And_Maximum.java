//https://www.codechef.com/JULY19B/problems/MMAX
//Accepted
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t > 0)
		{
			long n = sc.nextLong();
			
			String k = sc.next();
			
			BigInteger bi = new BigInteger(k);
			
			
			/*System.out.println("test = " + bi.divide(BigInteger.valueOf(n)));
			int com = bi.divide(BigInteger.valueOf(n)).compareTo(BigInteger.valueOf(0));
			//System.out.println("k / n = " + bi.divide(BigInteger.valueOf(n)).getClass());
			if(com == 0)
				{
					System.out.println("inside if");
					System.out.println((BigInteger.valueOf(n).subtract(bi)).multiply(BigInteger.valueOf(2)));
				}
			else{
				System.out.println("inside else");
				System.out.println(bi.mod(BigInteger.valueOf(n)).multiply(BigInteger.valueOf(2)));
			}*/
			
			long extra =  bi.mod(BigInteger.valueOf(n)).longValue();
			long remain = n - extra;
			
			if(extra == remain)
				System.out.println(extra * 2 - 1);
			else if(extra < remain)
				System.out.println(extra * 2);
			else
				System.out.println(remain * 2);
			
			
			t--;
		}
		
	
	}
}
