//http://codeforces.com/contest/1029/problem/0
#include<bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;

    cin >> n;

    std::vector<int> v(n);


    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    int count = 0, max_count = 0;

    for (int i = 0; i < n; ++i)
    {
        if(i == 0)
           {
                count++;
                max_count++;
                continue;
           } 
        if(v[i] > v[i-1]*2)
        {
            count = 1;

        }
        else
        {
            count++;
            if(count > max_count)
                max_count = count;
        }

    }

    cout << max_count;
    return 0;
}