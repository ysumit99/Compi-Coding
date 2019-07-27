## Leetcode - BiWeekly Contest 5  ##

***

##### Author: Sumitkumar Yadav

##### Date: 27th July 2019

***

### Problem1:  _Largest Unique Number_ 

> Given an array of integers A, return the largest integer that only occurs once. If no integer occurs once, return -1.

### Sample Test Cases: 
```cpp
Example 1:

Input: [5,7,3,9,4,9,8,3,1]
Output: 8
Explanation: 
The maximum integer in the array is 9 but it is repeated. The number 8 occurs only once, so it's the answer.

Example 2:

Input: [9,9,8,8]
Output: -1
Explanation: 
There is no number that occurs only once.

```
 ### Constraints: 

_Note:_

>1 <= A.length <= 2000

>0 <= A[i] <= 1000

### Approach :

> Since the given constraints are low , this question is fairly starightforward. We can use a Hash Table where each element maps to its value as index. Just Loop through the elements and store their frequencies. Start from 1000 in descending order and return the first element having frequency 1

### Complexity :

> O(N)

*Note* Refer [largestUniqueNumber.cpp](../largestUniqueNumber.cpp) for code

***

### Problem 2: _Armstrong Number_

> The k-digit number N is an Armstrong number if and only if the k-th power of each digit sums to N. Given a positive integer N, return true if and only if it is an Armstrong number.

 ### Sample Test Cases:
```cpp

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

```

### Constraints: 

_Note:_

>1 <= N <= 10^8

### Approach :

> Get digit count in the number. Fetch each digit using mod 10 and raise to the power of digit count (*Maximum '8' as N can be at max 10^8*) and keep storing the sum. Finally check if the sum equals given number.

### Complexity :

> O(log(N))

*Note* Refer [armstrongNumber.cpp](../armstrongNumber.cpp) for code

***

