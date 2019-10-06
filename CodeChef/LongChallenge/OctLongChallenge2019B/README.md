## October Long Challenge 2019 Submissions

## Problem 1: Phone Prices (S10E)

#### Difficulty: CakeWalk

#### Approach: Simple Bruteforce.

```java
            for(int i = 0; i < n; i++)
			{	
				goodFlag = true;
				for(int j = i - 1; j >= i - 5 && j >= 0; j--)
					if(price[i] >= price[j])
					{
						goodFlag = false;
						break;
					}
				if(goodFlag)
					goodDays++;
			}

```


1. Time Complexity: O(N)
2. Space Complexity: O(N)
