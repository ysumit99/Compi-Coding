## August Lunchtime 2019B

Problem 1: Eidi Gift
[Problem Link](https://www.codechef.com/LTIME75B/problems/EID2)

### Difficulty: Cake Walk

### Approach:
1. Use a vector of pairs (pair of age and money). 
2. Sort the vector by age.
3. Iterate through the vector, if at any point the money for current element is less than previous return "NOT FAIR". Else return "FAIR"
4. One corner case, when age is same as previous element's age
