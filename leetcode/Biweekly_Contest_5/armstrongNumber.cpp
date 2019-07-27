//https://leetcode.com/contest/biweekly-contest-5/problems/armstrong-number/

/** 

    The k-digit number N is an Armstrong number if and only if the k-th power of each digit sums to N.

    Given a positive integer N, return true if and only if it is an Armstrong number.

 

Example 1:

Input: 153
Output: true
Explanation: 
153 is a 3-digit number, and 153 = 1^3 + 5^3 + 3^3.
Example 2:

Input: 123
Output: false
Explanation: 
123 is a 3-digit number, and 123 != 1^3 + 2^3 + 3^3 = 36.

   Note:
   
    1 <= N <= 10^8
**/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isArmstrong(int N) {
        
        int k = 0, temp, num = N;
        
        while(N > 0)
        {
            temp = N % 10;
            
            k++;
            
            N/=10;
        }
        N = num;
        int sum = 0;
        
         while(num > 0)
        {
            temp = num % 10;
           
            sum += pow(temp, k);
            num /= 10;
        }
        
        return sum == N ? true : false;
        
    }
};