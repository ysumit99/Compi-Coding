//https://www.codechef.com/MARCH20B/problems/CHPINTU

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

/* Generate Random Number */
int generateRandomNumber(int max, int min)
{

    int randomNumber = std::rand() % (max + 1 - min) + min;

    return randomNumber;
}

/**
* Generate Test Case  => Not Complete
*/
void generateTestCase(int testcase, int n, int m)
{

    ofstream outfile;
    outfile.open("testcase.txt");

    int randomTestCases = generateRandomNumber(testcase, 0);
    outfile << randomTestCases << endl;

    for (int i = 0; i < randomTestCases; i++)
    {
        int nValue = generateRandomNumber(n, 1);
        int mValue = generateRandomNumber(m, 1);
        outfile << nValue << " " << mValue << endl;

        for (int j = 0; j < nValue; j++)
        {
            outfile << generateRandomNumber(m, 1) << " ";
        }

        outfile << endl;

        for (int j = 0; j < nValue; j++)
        {
            outfile << generateRandomNumber(50, 0) << " ";
        }

        outfile << endl;
    }

    outfile.close();
    return;
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

        /* generate test cases */
        // generateTestCase(1000, 50, 50);

        int n, m, ele, price;
        cin >> n >> m;

        vector<int> basket;

        int totalPrice[51];
        bool occured[51];

        for (int i = 0; i < 51; i++)
        {
            totalPrice[i] = 0;
            occured[i] = false;
        }

        /* baskets */
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            occured[ele] = true;
            basket.push_back(ele);
        }

        /* prices for baskets */
        for (int i = 0; i < n; i++)
        {
            cin >> price;
            totalPrice[basket[i]] += price;
        }

        int min = INT_MAX;
        for (int i = 1; i <= 50; i++)
        {

            if (totalPrice[i] < min && occured[i])
                min = totalPrice[i];
        }

        cout << min << endl;
    }
    return 0;
}
