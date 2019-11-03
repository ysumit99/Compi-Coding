import java.util.ArrayList;
import java.util.Scanner;

//https://www.codechef.com/NOV19B/problems/SC31
//Wrong Answer
class SC31 {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        // testcase
        int t = sc.nextInt();

        // input 'n'
        int participants;

        ArrayList<String> weapons = new ArrayList<>();
        while (t > 0) {
            participants = sc.nextInt();

            // weapons input
            for (int i = 0; i < participants; i++)
                weapons.add(sc.next());

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