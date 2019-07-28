//http://codeforces.com/contest/1029/problem/0
#include<bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    std::vector<int> left(n), right(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> left[i];
        cin >> right[i];
    }

    int left_high, right_low;


    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    


    return 0;
}