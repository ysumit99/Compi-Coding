//https://codeforces.com/problemset/problem/546/A
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

/* generate Random Number in a range */
int generateRandomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
/**
* Generate Test Case
*/
void generateTestCases(int t, int N, int K, int elementUpperLimit)
{

    //Generate Test cases
    for (int i = 0; i < t; i++)
    {
        int randomN = generateRandomNumber(1, N);
        int randomK = generateRandomNumber(1, K);
        cout << randomN << " " << randomK << endl;

        for (int j = 0; j < randomN; j++)
        {
            cout << generateRandomNumber(1, elementUpperLimit) << " ";
        }
        cout << endl;
    }
}

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int k, n, w, cost = 0;

    cin >> k >> n >> w;

    for (int i = 0; i < w; i++)
    {
        cost += k * (i + 1);
    }

    if (cost < n)
    {
        cout << 0;
    }
    else
    {
        cout << cost - n;
    }

    return 0;
}