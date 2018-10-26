//http://codeforces.com/contest/1073
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1];
            return 0;
        }
    }
    cout<<"NO"; //only case where it is not possible is when all chars are same

}