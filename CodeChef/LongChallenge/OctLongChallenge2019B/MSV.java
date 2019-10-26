//https://www.codechef.com/OCT19B/problems/MSV
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class MSV
{
    //test case generator
    static void generateTestCase(String inputFilePath, int testCount) throws IOException {
        
        /* second parameter 'false' overwrites the existing values */
        FileWriter fr = new FileWriter(new File(inputFilePath), false); 
        BufferedWriter writer = new BufferedWriter(fr);
    
        while(testCount > 0)
        {
            
                /***
                 * Generate Random Test Values for n,k
                 * Note this method can be refactored latter to generalize for any input (here only 'n' and 'k' are taken into account)
                 * and constraints  as well
                 */
            
                int n = (int)(Math.random()*10000); /* Here 'n' can be upto 10^4 */
                long k  =(long)(Math.random()*1000000000000L); /* Here 'k' can be maximum 10^9 */
                
                writer.append(n + " " + k + "\n");
                
                for(int i = 0; i < n; i++)
                    writer.append((int)(Math.random()*10000000) + " "); /* A[i] values are between 1 and 10^7 */
                    
            
            testCount--;
        }
        
         writer.close();
    }
    
    
	public static void main (String[] args) 
	{
		// your code goes here
		
		// TODO Auto-generated method stub
		String filePath = "./input.txt";
        

        try { 
            
           
        Scanner sc = new Scanner(new File(filePath));
		
        int t = sc.nextInt();
        
       
        generateTestCase(filePath, t);
		
		while(t > 0)
		{
			
			int n;
			
			n = sc.nextInt();
			
			int arr[] = new int[n];
			
			for(int i = 0; i <n; i++)
				arr[i] = sc.nextInt();
			
			int maxStarVal = 0, starVal = 0;
			
			/* Brute Force */
			for(int i = 0; i < n; i++)
			{
				starVal = 0;
				for(int j = i - 1 ; j >= 0; j--)
				{
					if(arr[j] % arr[i] == 0)
						starVal++;
				}
				
				if(starVal > maxStarVal)
					maxStarVal = starVal;
			}
			
			System.out.println(maxStarVal);
			
			t--;
		}
    
    } catch (IOException e) { 
        
        e.printStackTrace();
   }

	}
}
