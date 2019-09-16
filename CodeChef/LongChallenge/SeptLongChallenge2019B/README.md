### September Long Challenge Solutions


#### Problem 1: Easy Fibonacci (FIBEASY)
[Problem link](https://www.codechef.com/SEPT19B/problems/FIBEASY)

[Accepted Solution](https://github.com/ysumit99/Compi-Coding/blob/master/CodeChef/LongChallenge/SeptLongChallenge2019B/FIBEASY.cpp)

#### Difficulty: Easy

#### Approach
Simple Observations: 

1. If N numbers are given the only remaining number after the given operations will be nearest power of 2 less than or equal to N

2. Fibonacci Sequence Unit digits repeat after a cycle of 60 
</br>

Using the above observations the final digit can be found using mod 60
```code cpp

ll count = 0, nearestPowerOfTwo = 0;
        while(n > 1)
            {
                n/= 2;
                count++;
            }
       
        nearestPowerOfTwo = pow(2,count);
        
       //final answer
       cout << fibUnitPlaceCycle[(nearestPowerOfTwo - 1) % 60] << "\n";
```


#### Problem 2: Chef and Interesting Subsequences (CHEFINSQ)
[Problem link](https://www.codechef.com/SEPT19B/problems/CHEFINSQ)

[Accepted Solution](https://github.com/ysumit99/Compi-Coding/blob/master/CodeChef/LongChallenge/SeptLongChallenge2019B/CHEFINSQ.java)

#### Difficulty: Easy

#### Approach
The constraints of this problem make it very easy to solve. Since array values are at max 100, we can simply store occurence of each element in an array. As the sum of the interesting subsequence needs to be minimum possible, we can start including all the elements starting from 1 until size becomes greater than or equal to 'k'. Refer the snippet below
```code java
int i = 1;
            while(count < k && i <= 100)
            {
                count += freq[i];
                if(count >= k)
                    break;
                i++;
            }
```


The final answer can be calculated using a simple combination formula 

```code java

//method to calculate factorial
static BigInteger factorial(BigInteger n){
	
		BigInteger res = new BigInteger("1");
		BigInteger one = new BigInteger("1");
		
	
		while(n.compareTo(one) == 1)
			{
				res = res.multiply(n);
				n = n.subtract(one);	
			}
	
		return res;
	}
	
  //method to calculate combination
	static BigInteger  combination(BigInteger n, BigInteger r) {
		return factorial(n).divide((factorial(n.subtract(r)).multiply(factorial(r))));
	}
  
 //final result
res = combination(BigInteger.valueOf(freq[i]), BigInteger.valueOf(count-k)); // => nCR

```


