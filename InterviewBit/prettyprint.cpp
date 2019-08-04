//https://www.interviewbit.com/problems/prettyprint/

/**
Print concentric rectangular pattern in a 2d matrix. 
Let us show you some examples to clarify what we mean.

Example 1:

Input: A = 4.
Output:

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
 */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > prettyPrint(int A){

    vector<vector<int> > res;

    /*
        No of rows and columns for this problem = 2*n - 1

        This can be printed in 2 steps.

        First print the upper half and then the lower half

        Now the upper half itself can be divided into 3 steps.

            step1: A decreasing sequence starting with 'n' moving down to '1' in each iteration. No. of 
            elements printed in each iteration will be equal to row number.

            step2: A constant sequence where constant is "n-i" which will be printed (2*n -1 - 2*row number)

            step3: Increasing sequence 

        Lower half is the exact opposite of upper half except for middle line
    */

    int size = 2*A - 1; // no of rows/columns

   //upper half
   for(int i = 0; i <= size/2 ; i++) //print row by row
   {
       vector<int> row;
       //decreasing sequence
       int dec = A;

       for(int j = 0; j < i; j++)
            row.push_back(dec--);//cout << dec-- << " ";

        //constant part
       for(int k = 0; k < size - 2*i; k++)
            row.push_back(A-i);//cout << A - i << " ";

        //increasing part
        int inc = A - i + 1;

        for(int l = 0; l < i; l++)
            row.push_back(inc++);//cout << inc++ << " ";

        res.push_back(row);
        cout << "\n";
     
   }

   //lower half

   for(int i = size/2 - 1; i >= 0; i--)
   {
       vector<int> row;

       //decreasing sequence
       int dec = A;

       for(int j = 0; j < i; j++)
            row.push_back(dec--);//cout << dec-- << " ";

        //constant part
       for(int k = 0; k < size - 2*i; k++)
            row.push_back(A-i);//cout << A - i << " ";

        //increasing part
        int inc = A - i + 1;

        for(int l = 0; l < i; l++)
            row.push_back(inc++);//cout << inc++ << " ";

        res.push_back(row);
        cout << "\n";
       
   }



    

    return res;
}



int main(){

    int n;

    cin >> n;

    vector<vector<int> >res =  prettyPrint(n);

    vector<vector<int> > ::const_iterator row;
    vector<int> ::const_iterator col;

    cout << "size = " << res.size() << "\n";

    for(row = res.begin(); row != res.end(); row++)
    {
        for(col = row->begin(); col != row->end(); col++)
        {
            cout << *col << " ";
        }

        cout << "\n";
    }

    return 0;
}