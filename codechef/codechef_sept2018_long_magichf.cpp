//https://www.codechef.com/SEPT18B/problems/MAGICHF/
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;


    int n,x,s;
    int a,b, res;

    while(t--)
    {
        cin >> n >> x >> s;

        vector< pair<int, int> > v;

        res = x;
        
        for(int i = 0 ; i < s ; i++)
        {
            cin >> a >> b;

            if(a == res)
                res = b;
            else if(b == res)
                res = a;

            // v.push_back(make_pair(a,b));

        }

        cout << res << endl;

        //  for(int i = 0 ; i < s ; i++)
        // {
        //     cout <<"first = "<< v[i].first <<"         second = " << v[i].second << endl;

        // }

        

    }
    return 0;
}