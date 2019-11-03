//https://www.codechef.com/NOV19B/problems/HRDSEQ
//Accepted
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

/* factorial */
ll factorial(ll n)
{
    ll result = 1;

    while (n >= 1)
        result *= n--;

    return result;
}

/* Combination =>  nCr */
ll combination(ll n, ll r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

/**
* Generate Test Case ===> To be copied from java version latter
*/
void generateTestCase(string filePath, int testCount)
{
}

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
        int n;

        cin >> n;

        vector<int> v(n);
        int prevOccurIndex;
        /*Base Case*/
        v[0] = 0;

        /* Generate the sequence */
        for (int i = 0; i < n - 1; i++)
        {
            prevOccurIndex = -1;

            for (int j = i - 1; j >= 0; j--)
            {
                if (v[j] == v[i])
                {
                    prevOccurIndex = j;
                    break;
                }
            }
            if (prevOccurIndex != -1)
                v[i + 1] = i - prevOccurIndex;
            else
                v[i + 1] = 0;
        }

        /* Generated Sequence */
        // for (int i = 0; i < n; i++)
        //     cout << v[i] << endl;

        /* Expected Output*/
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[n - 1])
                res++;
        }

        cout << res << "\n";
    }
    return 0;
}