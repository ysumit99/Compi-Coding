//https://www.hackerearth.com/challenges/competitive/may-circuits-19/algorithm/capital-92c227f3/
//Partially Correct

/* IMPORTANT: Multiple classes and nested static classes are supported */
 
/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;
 
//import for Scanner and other utility classes
import java.util.*;
*/
import java.util.*;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        /* Sample code to perform I/O:
         * Use either of these methods for input
 
        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name = br.readLine();                // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT
 
        //Scanner
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();                 // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT
 
        */
 
        // Write your code here
        
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		Long n,k,min = 9999999999999L,sum, temp;
		int pos = 0;
		
		n = sc.nextLong();
		k = sc.nextLong();
		ArrayList<Long> list = new ArrayList<Long>();
		
		
		for(int i = 0 ; i < n; i++)
		{
			
			list.add(sc.nextLong());
		}
		
		/*for(int l: list)
		{
			System.out.println(l);
		}*/
		
		for(int i = 0; i < n; i++)
		{
			sum = 0L;
			temp = list.get(i);
			for(int j = 0; j < n; j++)
			{
				if(i!=j)
				{
					sum += (temp > list.get(j)) ? (temp - list.get(j)) : ( list.get(j)- temp );
					
				}
			}
			
			
			if(sum < min)
				{
					min = sum;
					pos = i + 1;
				}
			
			//System.out.println("sum = " + sum + " pos = " + pos + " min = " + (min - k));
		}
		
		System.out.println(pos + " " + (min - k));
 
 
		
		
 
	
 
    }
}