//https://www.codechef.com/MAY19B/problems/MATCHS
//Accepted
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t > 0)
		{
		    long n=sc.nextLong(); //pile 1
		    long m=sc.nextLong(); //pile 2
		    int richWins=0;

		    long temp=0;
		    long larger=0, smaller=0;
		    
		    smaller = n < m ? n: m;
		    larger = n > m ? n : m;
		    
		    while(larger/2<smaller)
		    {
		        temp=smaller;
		        smaller=larger-smaller;
		        larger=temp;
		        if(smaller==0)
		        {
		            break;
		        }
		        else if(larger==0)
		        {
		            break;
		        }
		        else{
		            if(richWins==0)
		            {
		                richWins=1;
		            }
		            else
		            {
		                richWins=0;
		            }

		        }
		    }
		    if(richWins==1)
		    {
		        System.out.println("Rich");
		    }
		    else{
		        System.out.println("Ari");
		    }
		    t--;
		}  
	}
}
