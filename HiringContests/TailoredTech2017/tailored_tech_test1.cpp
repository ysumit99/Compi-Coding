#include<bits/stdc++.h>
using namespace std;

/*
 * Complete the function below.
 */
vector <string> reducedFractionSums(vector <string> expressions) {
int n = expressions.size();
    vector <string> output;
    
    string str;
    for(int i = 0; i < n ; i++)
    { //logic to extract a,b,c,d from the given string
        str = expressions[i];
        vector <int> v;
        int temp;
        int count = 0;
        int sum; //to store value of a,b,c,d while evaluating vector v
        int count2;//to store place value eg. 10 , 100 ,1000 ....
        int a,b,c,d;
        for(int j = 0 ;j < str.size(); j++)
        {
            if(str[j] == '/' || str[j] == '+')
            {
                count++;
                //evaluate whatever is in the vector
                sum = 0;
                count2 = 1;
                for(int k = v.size() - 1; k >= 0; k--)
                {
                    sum +=(v[k] * count2);
                    count2 *=10; //place value increases by a factor of 10
                }
                
                if(count == 1)
                    a = sum;
                else if(count == 2)
                    b = sum;
                else if(count == 3)
                    c = sum;
                
                v.erase(v.begin(),v.end());
            }
            else
            {
                temp = str[j] - '0'; //convert char to int
                v.push_back(temp);
            }
                
        }
        //extract d
        sum = 0;
                count2 = 1;
                for(int k = v.size() - 1; k >= 0; k--)
                {
                    sum +=(v[k] * count2);
                    count2 *=10; //place value increases by a factor of 10
                }
        d = sum;//till here a,b,c,d are extracted
        
        
        int num,den;
        
        num = a*d + b*c;
        den = b*d;
        
        int smaller,larger;
        if(num <= den)
        {
            smaller = num;
            larger = den;
        }
        else
        {
            smaller = den;
            larger = num;
        }
        //find gcd of num and den which help to reduce to smallest ratio in next step
        
        //logic to calculate gcd of numerator and denominator
        int  gcd;
        for(int k=1 ;k<= num && k<=den ;k++){

            if(num%k==0 && den%k == 0 )
                  gcd=k;

        }
        //now reduce to least ratio
        num/=gcd;
        den/=gcd;
        str = to_string(num) + "/" + to_string(den);
        //just testing.... code is not yet complete 
        //output.push_back(to_string(d));
        output.push_back(str);
        
        
        
    }
    return output;
}
