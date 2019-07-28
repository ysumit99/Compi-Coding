//http://codeforces.com/contest/1187/problem/A
//Accepted

import java.util.Scanner;

public class problem_A {

    public static void main(String args[]) {
        int tc = 0;

        Scanner sc = new Scanner(System.in);

        tc = sc.nextInt();
        int n, s, t;

        while (tc > 0) {

            n = sc.nextInt();
            s = sc.nextInt();
            t = sc.nextInt();

            System.out.println(n - Math.min(s, t) + 1);

            tc--;
        }

    }
}