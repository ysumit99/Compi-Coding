//https://www.codechef.com/JAN21C/problems/WIPL
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int generateRandomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

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
    /* uncomment below for test case generation */
    //freopen("input.txt", "w", stdout);

    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout); /* comment this during test case generation */
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t, n, k, totalHeight, lostHeight, blocksRequired1, blocksRequired2, height1, height2;

    cin >> t;

    /** Generate Test Cases **/

    // t = 10;
    // cout << t << endl;
    // n = 25;
    // k = 1250;
    // int elementUpperLimit = 100;
    // generateTestCases(t, n, k, elementUpperLimit);

    /** End of Generate Test Cases **/

    while (t--)
    {
        cin >> n >> k;
        //cout << "n = " << n << " | k = " << k << endl;

        int blockHeight[n];
        //cumulativeHeight[n];
        vector<int> isUsed(n, 0);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << "isUsed[" << i << "]=" << isUsed[i] << endl;
        // }
        blocksRequired1 = 0;
        blocksRequired2 = 0;
        height1 = 0;
        height2 = 0;
        totalHeight = 0;
        lostHeight = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> blockHeight[i];
            totalHeight += blockHeight[i];
        }

        // cout << "totalHeight = " << totalHeight << endl;
        if (totalHeight < 2 * k)
        {
            cout << -1 << endl;
            continue;
        }

        sort(blockHeight, blockHeight + n, greater<int>());
        int res = 0, smallest = INT_MAX, sum = 0, sum2 = 0, count = 0, count2 = 0;
        //cout << "totalHeight = " << totalHeight << " | required height =  " << k << endl;
        for (int i = 1; i < (1 << n); i++)
        {
            sum = 0;
            sum2 = 0;
            count = 0;
            //count2 = 0;
            vector<int> isUsed(n, 0);

            //cout << "Tower 1{ ";

            // Print current subset
            for (int j = 0; j < n; j++)

                if ((i & (1 << j)) > 0)
                {
                    //cout << blockHeight[j] << ",";
                    sum += blockHeight[j];
                    isUsed[j] = 1;
                    count++;
                }
            //cout << " | height = " << sum << " }" << endl;

            //cout << "Tower 2{ ";
            if (sum >= k)
            {
                for (int j = 0; j < n; j++)
                {
                    if (isUsed[j] == 0)
                    {

                        //cout << blockHeight[j] << ",";
                        sum2 += blockHeight[j];
                        isUsed[j] = 1;
                        count++;
                        if (sum2 >= k)
                            break;
                    }
                }

                //cout << "tower2 height = " << sum2;
                if (sum2 >= k)
                {
                    // cout << "tower2  height = " << sum2 << " | tota blocks used = " << count;
                    if (count < smallest)
                    {
                        smallest = count;
                    }
                }
                else
                {
                    //cout << "tower2 not tall enough, height = " << sum2;
                }
            }
            else
            {
                //cout << "tower 1 not tall enough";
            }
            //cout << "}" << endl;
            isUsed.clear();
        }

        //cout << "final result" << smallest << endl;
        if (smallest == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << smallest << endl;
        }
    }

    return 0;
}