//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
//Accepted

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    
    
    static BigInteger factorial(BigInteger n)
	{
		//System.out.println("To be calculated: factorial of " + n);
		BigInteger res = new BigInteger("1");
		BigInteger one = new BigInteger("1");
		
		//System.out.println("compare value" + n.compareTo(one));
		while(n.compareTo(one) == 1)
			{
				res = res.multiply(n);
				n = n.subtract(one);
				//System.out.println("n = " + n);
				
			}
		//System.out.println("res => " + res);
		return res;
	}
	
	static BigInteger  combination(BigInteger n, BigInteger r) {
		return factorial(n).divide((factorial(n.subtract(r)).multiply(factorial(r))));
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
		// TODO Auto-generated method stub
		
		int t;
		
		Scanner sc = new Scanner(System.in);
		
		t = sc.nextInt();
		
		while(t > 0)
		{	
			long n,k;
			int ele;
			
			n = sc.nextLong();
			k = sc.nextLong();
			
			long freq[]= new long[101];
			
			for(int i = 0; i < n; i++)
				{
					ele = sc.nextInt();
					freq[ele]++;
				}
			
			BigInteger res = new BigInteger("0");
			long count = 0;
			

			
            int i = 1;
            while(count < k && i <= 100)
            {
                count += freq[i];
                if(count >= k)
                    break;
                i++;
            }

                res = combination(BigInteger.valueOf(freq[i]), BigInteger.valueOf(count-k)); // => nCR

        
			
			System.out.println(res);
			
			t--;
		}
		
	
	}
}
