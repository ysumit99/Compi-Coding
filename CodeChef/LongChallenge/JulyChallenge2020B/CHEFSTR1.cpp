#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, ele, prevEle = 0;
    long long int total = 0;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        total = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            total += abs(ele - prevEle - 1);
            prevEle = ele;
        }

        cout << total << endl;
    }
    return 0;
}