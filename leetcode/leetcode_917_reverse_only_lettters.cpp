//https://leetcode.com/contest/weekly-contest-105/problems/reverse-only-letters/
class Solution {
public:
    string reverseOnlyLetters(string S) {
                
        int len = S.length();


        int ele;


        int arr[100] = {0};

        string res, alpha_string;

        for (int i = 0; i < len; ++i)
        {
        	ele = S[i];

        	if(ele >= 65 && ele <= 90 )
        		alpha_string += S[i];// needs to stay in the original position
        	else if( ele >= 97 && ele <= 122 )
        		alpha_string += S[i];
        	else
        		arr[i] = 1;
        		
        }

        //int count = 0;

        for (int i = 0; i < len; ++i)
        {
        	if(arr[i] == 1)
        		res += S[i];
        	else
        		res += '{';
        }

        //cout << "alpha_string = " << alpha_string << endl; 

        //cout << "res = " << res <<endl ;

        int index = alpha_string.length() - 1;

       for (int i = 0; i < len; ++i)
       {
       		if(res[i] == '{')
       		{	
       			//cout << "test" << endl;
       			res[i] = alpha_string[index];
       			index--;
       		}

       }

        return res;
    }
};