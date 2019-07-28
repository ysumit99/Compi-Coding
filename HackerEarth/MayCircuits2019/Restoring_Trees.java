//https://www.hackerearth.com/challenges/competitive/may-circuits-19/algorithm/owcamay-cir-19-acc1798b/
//Partially Accepted


/* IMPORTANT: Multiple classes and nested static classes are supported */
 
/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;
 
//import for Scanner and other utility classes
*/
import java.util.Scanner;
 
 
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
		
		/*
		 * 
		 * Given Input
		 * 
		 * 5
		 * 2 4 1 0 3
		 * 3 5 4 5 4
		 * 
		 * Output
		 * 
		 * 3 4 4 0 3 
		
		*/
		
		Scanner sc = new Scanner(System.in);
		
		int nodes = sc.nextInt();
		
		
		
		int start[] = new int[nodes], end[] = new int[nodes], parent[] = new int[nodes];
		int end_time_immediate_parent = 99999999;
		
		for(int i = 0 ; i < nodes; i++)
		{
			start[i] = sc.nextInt();
		}
		
		
		for(int i = 0 ; i < nodes; i++)
		{
			end[i] = sc.nextInt();
		}
		
		
		/*for(int i = 0 ; i < nodes; i++)
		{
			System.out.println("start[" + i + "] = " + start[i] + " End[" + i + "] = " + end[i]);
		}
		*/
		for(int i = 0; i < nodes; i++)
		{
			if(start[i] == 0)
			{
				parent[i] = 0;
				continue;
			}
			end_time_immediate_parent = 99999999;
			for(int j = 0 ; j < nodes; j++)
			{
				if(i != j)
				{
					if(start[j] < start[i] && end[j] >= end[i])
					{
						//System.out.print("for i = " + i + "  ");
						//System.out.print("end[" + j + "] = " + end[j]);
						//System.out.print(" end_time_immediate_parent = " + end_time_immediate_parent + " ");
						//end_time_immediate_parent = (end_time_immediate_parent < end[j]) ? (end_time_immediate_parent) : (end[j]);
						if(end_time_immediate_parent > end[j])
						{
							//System.out.print(" j = " + j);
							end_time_immediate_parent = end[j];
							parent[i] = j + 1;
							//System.out.print(" parent = " + parent[i]);
						}
						//System.out.println();
					}
					
					
				}
			}
			
		
		}
		
		for(int i = 0 ; i < nodes; i++)
			System.out.print(parent[i] + " ");
			/*System.out.println("Parent[" + (i+1) + "] = " + parent[i]);*/
		
		
		
		
		
		
		
 
	
 
    }
}