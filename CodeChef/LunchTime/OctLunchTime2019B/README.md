## October Lunchtime Submission

### Problem 1: Khaled in HIT (HIT)

[Problem link](https://www.codechef.com/LTIME77B/problems/HIT)

[Accepted Solution](https://github.com/ysumit99/Compi-Coding/blob/master/CodeChef/LunchTime/OctLunchTime2019B/HIT.cpp)

### Difficulty: Easy

### Approach

1.Approach: Sort the Scores for the students.

2.Check for pair of indexes
{A[n/4], A[n/4 + 1]}, {A[n/2], A[n/2 +1]}, {A[3n/4], A[3n/4 + 1]}

3.If any of these three values are same, print -1.

4.Else the answer for x,y,z is A[n/4 + 1], A[n/2 + 1], A[3n/4 + 1] (This always ensures x+y+z is max as specified in the question)
