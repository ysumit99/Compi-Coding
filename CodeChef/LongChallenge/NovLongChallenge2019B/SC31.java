import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

//https://www.codechef.com/NOV19B/problems/SC31
//Wrong Answer
class SC31 {

    // method to generate random test cases within the given constraints.
    static void generateTestCase(String inputFilePath, int testCount) throws IOException {

        /* second parameter 'false' overwrites the existing values */
        FileWriter fr = new FileWriter(new File(inputFilePath), false);
        BufferedWriter writer = new BufferedWriter(fr);

        while (testCount > 0) {

            /***
             * Generate Random Test Values for n,k Note this method can be refactored latter
             * to generalize for any input (here only 'n' and 'k' are taken into account)
             * and constraints as well
             */

            int n = (int) (Math.random() * 10); /* Here 'n' can be upto 10^5 */
            writer.append(n + "\n");

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < 10; j++)
                    writer.append((int) Math.floor(Math.random() * 2) + "");
                writer.append("\n");
            }

            testCount--;
        }

        writer.close();
    }

    public static void main(String args[]) {

        String inputFilePath = "./input.txt";
        
        //for test case
        Scanner sc = new Scanner(System.in);
        Scanner scFile = null;
        //for taking file 
        try{
            scFile = new Scanner(new File(inputFilePath));
        }catch(Exception e){
            System.err.println(e);
        }
        

        // testcase
        int t = sc.nextInt();
        
        // generate test case
        try {
            generateTestCase(inputFilePath, t);
        } catch (Exception e) {
            System.err.println(e);
        }

        // input 'n'
        int participants;

        ArrayList<String> weapons = new ArrayList<>();
        while (t > 0) {
            participants = scFile.nextInt();

            // weapons input
            for (int i = 0; i < participants; i++)
                weapons.add(scFile.next());

            // fight
            for (int i = 0; i < participants - 1; i++) {

                String XOR = "";
                for (int j = 0; j < 10; j++) {

                    if (weapons.get(i).charAt(j) == weapons.get(i + 1).charAt(j))
                        XOR += '0';
                    else
                        XOR += '1';

                }
                weapons.set(i + 1, XOR);
            }

            // result
            int res = 0;

            for (int j = 0; j < 10; j++)
                if (weapons.get(participants - 1).charAt(j) == '1')
                    res++;
            System.out.println(res);
            t--;
        }
    }

}