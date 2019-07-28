//http://codeforces.com/contest/1025/problem/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    string s;
    
    cin >> s;
    
    //Corner Case 
    if(n == 1)
    {
        cout << "Yes";
        return 0;
    }
    
    set<char> set;
    
    for(int i = 0; i < n; i++)
    {
        set.insert(s[i]);
    }
    
    if(set.size() < n)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}