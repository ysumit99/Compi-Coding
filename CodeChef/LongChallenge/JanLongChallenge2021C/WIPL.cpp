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

        // for (int i = 0; i < n; i++)
        // {
        //     cout << "blockHeight[" << i << "]=" << blockHeight[i] << endl;
        // }

        // for (int i = n - 1; i >= 0; i--)
        // {
        //     if (i == n - 1)
        //         cumulativeHeight[i] = blockHeight[i];
        //     else
        //         cumulativeHeight[i] = cumulativeHeight[i + 1] + blockHeight[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << "cumHeight[" << i << "]=" << cumulativeHeight[i] << endl;
        // }
        bool isPossible = true, alternate = false;
        int temp;
        int possibleBlockIndex = -1;

        //cout << "************* tower-1 *************" << endl;
        //tower1
        for (int i = 0; i < n; i++)
        {
            if (height1 + blockHeight[i] < k)
            {
                if (possibleBlockIndex != -1)
                {

                    height1 += blockHeight[possibleBlockIndex];
                    blocksRequired1++;
                    isUsed[possibleBlockIndex] = 1;
                    lostHeight += (height1 - k);
                    //cout << "possible block being used otherwise additional block is required  at index => [" << possibleBlockIndex << "] with height = " << blockHeight[possibleBlockIndex] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                    break;
                }

                height1 += blockHeight[i];
                blocksRequired1++;
                isUsed[i] = 1;
                //cout << "block used at index => [" << i << "] = " << blockHeight[i] << " | heightTillNow = " << height1 << endl;
            }
            else if (height1 + blockHeight[i] == k)
            {

                height1 += blockHeight[i];
                blocksRequired1++;
                isUsed[i] = 1;
                //cout << "block used at index => [" << i << "] = " << blockHeight[i] << " | FinalHeight = " << height1 << endl;
                break;
            }
            else if (height1 + blockHeight[i] > k)
            {
                lostHeight += (height1 + blockHeight[i] - k);
                if (totalHeight - lostHeight < 2 * k) /* can't afford loss */
                {
                    lostHeight -= height1 + blockHeight[i] - k;
                    //check if further element can be used
                    temp = i + 1;
                    if (temp == n)
                    {
                        isPossible = false;
                        break;
                    }
                    alternate = false;
                    while (temp < n)
                    {
                        if (height1 + blockHeight[temp] < k)
                        {
                            if (possibleBlockIndex != -1)
                            {
                                height1 += blockHeight[possibleBlockIndex];
                                blocksRequired1++;
                                isUsed[possibleBlockIndex] = 1;
                                alternate = true;
                                lostHeight += (height1 - k);
                                // cout << "possible block being used otherwise additional block is required  at index => [" << possibleBlockIndex << "] with height = " << blockHeight[possibleBlockIndex] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                                break;
                            }

                            height1 += blockHeight[temp];
                            blocksRequired1++;
                            isUsed[temp] = 1;
                            // cout << "block used at index => [" << temp << "] = " << blockHeight[temp] << " | heightTillNow = " << height1 << endl;
                            temp++;
                        }
                        else if (height1 + blockHeight[temp] == k)
                        {

                            height1 += blockHeight[temp];
                            blocksRequired1++;
                            isUsed[temp] = 1;
                            alternate = true;
                            // cout << "block used at index => [" << temp << "] = " << blockHeight[temp] << " | FinalHeight = " << height1 << endl;
                            break;
                        }
                        else if (height1 + blockHeight[temp] > k)
                        {
                            lostHeight += (height1 + blockHeight[temp] - k);
                            if (totalHeight - lostHeight < 2 * k)
                            {
                                lostHeight -= (height1 + blockHeight[temp] - k);
                                temp++;
                            }
                            else
                            {

                                // if (possibleBlockIndex == -1)
                                // {
                                if (temp == n - 1)
                                {
                                    height1 += blockHeight[temp];
                                    blocksRequired1++;
                                    isUsed[temp] = 1;
                                    alternate = true;
                                    //cout << "last possible block being used  at index => [" << temp << "] with height = " << blockHeight[temp] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                                    break;
                                }

                                lostHeight -= (height1 + blockHeight[temp] - k);

                                possibleBlockIndex = temp;
                                //cout << "possible block, may be used latter at index => [" << possibleBlockIndex << "] with height =  " << blockHeight[possibleBlockIndex] << " | height till now " << height1 << " | heightLost = " << lostHeight << endl;
                                temp++;
                                // }
                                // else
                                // {
                                //     if (temp == n - 1)
                                //     {

                                //         height1 += blockHeight[temp];
                                //         blocksRequired1++;
                                //         isUsed[temp] = 1;
                                //         alternate = true;
                                //         //cout << "possible block being used  at index => [" << temp << "] with height = " << blockHeight[temp] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                                //         break;
                                //     }
                                // }
                            }
                        }
                    }
                    if (alternate == false)
                    {
                        if (possibleBlockIndex != -1 && height1 < k && isUsed[possibleBlockIndex] == 0)
                        {
                            lostHeight += (height1 + blockHeight[possibleBlockIndex] - k);
                            if (totalHeight - lostHeight < 2 * k)
                            {
                                isPossible = false;
                                break;
                            }

                            height1 += blockHeight[possibleBlockIndex];
                            blocksRequired1++;
                            isUsed[possibleBlockIndex] = 1;
                            break;
                        }
                        else
                        {
                            isPossible = false;
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                else /* can afford loss */
                {

                    // if (possibleBlockIndex == -1)
                    // {
                    if (i == n - 1)
                    {
                        height1 += blockHeight[i];
                        blocksRequired1++;
                        isUsed[i] = 1;

                        //cout << "last possible block being used  at index => [" << i << "] with height = " << blockHeight[i] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                        break;
                    }
                    possibleBlockIndex = i;
                    //cout << "possible block having more height than required at index => [" << i << "] with height = " << blockHeight[i] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                    lostHeight -= (height1 + blockHeight[i] - k);
                    //}
                    // else
                    // {
                    //     height1 += blockHeight[i];
                    //     blocksRequired1++;
                    //     isUsed[i] = 1;
                    //     //cout << "possible block being used  at index => [" << i << "] with height = " << blockHeight[i] << " | heightTillNow = " << height1 << " | heightLost = " << lostHeight << endl;
                    //     break;
                    // }
                }
            }
        }

        if (isPossible == false)
        {
            cout << -1 << endl;
            continue;
        }

        if (height1 < k && possibleBlockIndex != -1 && isUsed[possibleBlockIndex] == 0)
        {
            //cout << "!!Special case!!" << endl;

            lostHeight += (height1 + blockHeight[possibleBlockIndex] - k);
            if (totalHeight - lostHeight < 2 * k)
            {
                cout << -1 << endl;
                continue;
            }
            lostHeight += (height1 + blockHeight[possibleBlockIndex] - k);
            height1 += blockHeight[possibleBlockIndex];
            blocksRequired1++;
            isUsed[possibleBlockIndex] = 1;
            // cout << "possible block being used  at index => [" << possibleBlockIndex << "] = " << blockHeight[possibleBlockIndex] << endl;
        }

        //tower2
        // cout << "************* tower-2 *************" << endl;
        for (int i = 0; i < n; i++)
        {
            if (isUsed[i] == 0 && height2 + blockHeight[i] < k)
            {
                height2 += blockHeight[i];
                blocksRequired2++;
                isUsed[i] = 1;
                //cout << "block used at index => [" << i << "] = " << blockHeight[i] << " | heightTillNow = " << height2 << endl;
            }
            else if (isUsed[i] == 0 && height2 + blockHeight[i] >= k)
            {
                height2 += blockHeight[i];
                blocksRequired2++;
                isUsed[i] = 1;
                //cout << "final block used at index => [" << i << "] = " << blockHeight[i] << " | heightTillNow = " << height2 << endl;
                break;
            }
        }

        cout << blocksRequired1 + blocksRequired2 << endl;
    }

    return 0;
}