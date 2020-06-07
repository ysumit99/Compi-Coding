//https://www.codechef.com/JUNE20B/problems/PRICECON
//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    int t;

    cin >> t;

    while (t--)
    {

        int n, k, ele;
        int totalSum = 0, reducedSum = 0;

        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            totalSum += ele;
            ele > k ? reducedSum += k : reducedSum += ele;
        }

        cout << totalSum - reducedSum << endl;
    }

    return 0;
}