//http://codeforces.com/contest/1029/problem/0
#include<bits/stdc++.h>

using namespace std;

int is_palindrome(string t)
{
    int flag = 0;
    for (int i = 0; i < t.size()/2; ++i)
    {
        if(t[t.size()-1-i] != t[i])
            return 0;
    }

    return 1;
}

int main()
{
    int n,k;

    cin >> n >> k;

    string t;
    cin >> t;

    if(n == 1)
    {
        for (int i = 0; i < k; ++i)
        {
            cout << t;
        }

        return 0;
    }

    int is_pal = is_palindrome(t);

    if(is_pal == 1)
    {
        cout << t;

        
            for (int i = 0; i < k - 1; ++i)
            {
                if(n % 2 == 0)
                {
                    for (int j = 1; j < n ; ++j)
                    {
                        cout << t[j];
                    }
                }
                else
                {
                    for (int j = n/2 + 1; j < n ; ++j)
                    {
                        cout << t[j];
                    }
                }
                
            }
       
        
    }
    else
    {
        for (int i = 0; i < k; ++i)
        {
            cout<< t;
        }
    }
    return 0;
}