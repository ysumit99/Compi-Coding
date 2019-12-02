//https://www.codechef.com/problems/CMPRSS
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

void printRange(int startIndex, int endIndex, int size, vector<int> &v)
{
    //cout << "startIndex = " << startIndex << " | endIndex = " << endIndex << endl;
    cout << v[startIndex] << "..." << v[endIndex];
    if (endIndex != size - 1)
        cout << ",";
}

void printEvery(int startIndex, int endIndex, int size, vector<int> &v)
{

    for (int i = startIndex; i < endIndex; i++)
    {
        cout << v[i] << ",";
    }
    if (endIndex != size - 1)
        cout << v[endIndex] << ",";
    else
        cout << v[endIndex];
}

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t, n;

    /* test case */
    cin >> t;

    while (t--)
    {
        cin >> n;

        vector<int> v(n);

        /* input */
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        /* base case */
        if (n == 1)
        {
            cout << v[0];
            continue;
        }

        int range = 0, contiguousCount = 1;

        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] == 1)
                contiguousCount++;
            else
            {

                if (contiguousCount >= 3) /* print the range */
                    printRange(range, i - 1, n, v);
                else /* print every element */
                    printEvery(range, i - 1, n, v);

                range = i;
                contiguousCount = 1;
            }
        }

        /* corner case */

        if (contiguousCount >= 3) /* print the range */
            printRange(range, n - 1, n, v);
        else /* print every element */
        {
            printEvery(range, n - 1, n, v);
        }

        cout << "\n";
    }
    return 0;
}