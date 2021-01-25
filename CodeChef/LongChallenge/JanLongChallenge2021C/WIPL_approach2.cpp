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
    freopen("output.txt", "w", stdout); /* comment this during test case generation */
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t, n, k, totalHeight, lostHeight, blocksRequired1, blocksRequired2, height1, height2, totalBlocksUsed, totalHeightUsed;

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
        totalBlocksUsed = 0;
        totalHeightUsed = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> blockHeight[i];
            totalHeight += blockHeight[i];
        }

        //cout << "totalHeight = " << totalHeight << endl;
        if (totalHeight < 2 * k)
        {
            cout << -1 << endl;
            continue;
        }

        sort(blockHeight, blockHeight + n, greater<int>());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << "blockHeight[" << i << "]=" << blockHeight[i] << endl;
        // }

        bool isPossible = true, alternate = false;
        bool done = false;
        int temp;
        int possibleBlockIndex = -1;
        int lastUsedIndex = -1;
        int extraHeightRequired = 0;

        for (int i = 0; i < n; i++)
        {
            if (totalHeightUsed + blockHeight[i] < 2 * k || totalBlocksUsed + 1 < 2)
            {
                totalHeightUsed += blockHeight[i];
                isUsed[i] = 1;
                totalBlocksUsed++;
            }
            else
            {
                totalHeightUsed += blockHeight[i];
                isUsed[i] = 1;
                totalBlocksUsed++;
                lastUsedIndex = i;
                break;
            }
        }
        // cout << "lastUsedIndex = " << lastUsedIndex << " | totalHeightUsed = " << totalHeightUsed << endl;
        for (int i = 0; i <= lastUsedIndex; i++)
        {
            if (height1 + blockHeight[i] < k)
            {
                height1 += blockHeight[i];
                blocksRequired1++;
                //cout << " more blocks required" << endl;
            }
            else if (height1 + blockHeight[i] == k)
            {
                height1 += blockHeight[i];
                blocksRequired1++;
                blocksRequired2 = totalBlocksUsed - blocksRequired1;
                done = true;
                //cout << " found exact height" << endl;
                break;
            }
            else if (height1 + blockHeight[i] > k)
            {
                //   cout << " some height lost" << endl;
                lostHeight = height1 + blockHeight[i] - k;

                if ((totalHeight - lostHeight) < 2 * k) /* need extra block(s)*/
                {
                    height1 += blockHeight[i];
                    blocksRequired1++;
                    extraHeightRequired = 2 * k - (totalHeight - lostHeight);

                    int j = lastUsedIndex + 1;
                    if (j == n) /* No more element found */
                    {
                        isPossible = false;
                        break;
                    }
                    while (j < n && extraHeightRequired > 0)
                    {
                        totalHeightUsed += blockHeight[j];
                        extraHeightRequired -= blockHeight[j];
                        isUsed[j] = 1;
                        totalBlocksUsed++;
                        // cout << "additional block at index " << i << " used with height = " << blockHeight[j] << endl;
                        if (j == n - 1 && extraHeightRequired > 0)
                        {
                            isPossible = false;
                            //cout << "no more blocks. height till now  = " << totalHeightUsed << endl;
                            break;
                        }
                        if (extraHeightRequired <= 0)
                        {
                            //cout << "final extra blocks found " << endl;
                            blocksRequired2 = totalBlocksUsed - blocksRequired1;
                            break;
                        }
                        j++;
                    }
                    if (isPossible)
                    {
                        done = true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else /* can afford to waste some height */
                {

                    height1 += blockHeight[i];
                    blocksRequired1++;
                    blocksRequired2 = totalBlocksUsed - blocksRequired1;
                    done = true;
                    break;
                }
            }
        }

        if (done)
        {
            cout << blocksRequired1 + blocksRequired2 << endl;
        }

        if (isPossible == false)
        {
            cout << -1 << endl;
            continue;
        }
    }

    return 0;
}