//https://www.codechef.com/JAN21C/problems/WIPL
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

    int t, n, k, totalHeight, lostHeight, blocksRequired1, blocksRequired2, height1, height2;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;

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

        //tower1
        for (int i = 0; i < n; i++)
        {
            if (height1 + blockHeight[i] < k)
            {
                height1 += blockHeight[i];
                blocksRequired1++;
                isUsed[i] = 1;
            }
            else if (height1 + blockHeight[i] == k)
            {
                height1 += blockHeight[i];
                blocksRequired1++;
                isUsed[i] = 1;
                break;
            }
            else if (height1 + blockHeight[i] > k)
            {
                lostHeight += (height1 + blockHeight[i] - k);
                if (totalHeight - lostHeight < 2 * k) /* can't accord loss */
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
                            height1 += blockHeight[temp];
                            blocksRequired1++;
                            isUsed[temp] = 1;
                            temp++;
                        }
                        else if (height1 + blockHeight[temp] == k)
                        {
                            height1 += blockHeight[temp];
                            blocksRequired1++;
                            isUsed[temp] = 1;
                            alternate = true;
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
                                height1 += blockHeight[temp];
                                blocksRequired1++;
                                isUsed[temp] = 1;
                                alternate = true;
                                break;
                            }
                        }
                    }
                    if (alternate == false)
                    {
                        isPossible = false;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else /* can afford loss*/
                {
                    height1 += blockHeight[i];
                    blocksRequired1++;
                    isUsed[i] = 1;
                    break;
                }
            }
        }

        if (isPossible == false)
        {
            cout << -1 << endl;
            continue;
        }

        //tower2

        for (int i = 0; i < n; i++)
        {
            if (isUsed[i] == 0 && height2 + blockHeight[i] < k)
            {
                height2 += blockHeight[i];
                blocksRequired2++;
                isUsed[i] = 1;
            }
            else if (isUsed[i] == 0 && height2 + blockHeight[i] >= k)
            {
                height2 += blockHeight[i];
                blocksRequired2++;
                isUsed[i] = 1;
                break;
            }
        }

        cout << blocksRequired1 + blocksRequired2 << endl;
    }

    return 0;
}