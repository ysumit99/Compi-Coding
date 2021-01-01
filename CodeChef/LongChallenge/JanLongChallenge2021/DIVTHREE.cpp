//https://www.codechef.com/JAN21C/problems/DIVTHREE
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t, ele;
    int n, k, d, totalProblems, result;

    cin >> t;

    while (t--)
    {
        cin >> n >> k >> d;

        totalProblems = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            totalProblems += ele;
        }

        result = (totalProblems / k > d) ? d : totalProblems / k;
        cout << result << endl;
    }

    return 0;
}