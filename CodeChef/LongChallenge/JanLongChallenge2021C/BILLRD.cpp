//https://www.codechef.com/JAN21C/problems/BILLRD
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

    int t, n, k, x, y;

    cin >> t;

    while (t--)
    {
        cin >> n >> k >> x >> y;

        if (x == y) /* starting point on the line y = x */
        {
            cout << n << " " << n << endl;
            continue;
        }

        /* for all other cases */
        int xCoordinates[5], yCoordinates[5];
        string directionX[5], directionY[5];

        if (x > y)
        {

            directionX[1] = "+";
            directionY[1] = "+";

            directionX[2] = "-";
            directionY[2] = "+";

            directionX[3] = "-";
            directionY[3] = "-";

            directionX[4] = "+";
            directionY[4] = "-";
        }
        else if (y > x)
        {

            directionX[1] = "+";
            directionY[1] = "+";

            directionX[2] = "+";
            directionY[2] = "-";

            directionX[3] = "-";
            directionY[3] = "-";

            directionX[4] = "-";
            directionY[4] = "+";
        }

        // for (int i = 1; i <= 4; i++)
        // {
        //     cout << "dirX[" << i << "]=" << directionX[i] << " | dirY[" << i << "]=" << directionY[i] << endl;
        // }

        int prevX = x;
        int prevY = y;
        for (int i = 1; i <= 4; i++)
        {

            if (directionX[i] == "+" && directionY[i] == "+")
            {
                if (prevX > prevY)
                {
                    xCoordinates[i] = n;
                    yCoordinates[i] = n - prevX + prevY;
                }
                else
                {
                    yCoordinates[i] = n;
                    xCoordinates[i] = n - prevY + prevX;
                }
            }
            else if (directionX[i] == "+" && directionY[i] == "-")
            {
                xCoordinates[i] = prevY;
                yCoordinates[i] = prevX;
            }
            else if (directionX[i] == "-" && directionY[i] == "+")
            {
                xCoordinates[i] = prevY;
                yCoordinates[i] = prevX;
            }
            else if (directionX[i] == "-" && directionY[i] == "-")
            {
                if (prevX < prevY)
                {
                    xCoordinates[i] = 0;
                    yCoordinates[i] = prevY - prevX;
                }
                else
                {
                    yCoordinates[i] = 0;
                    xCoordinates[i] = prevX - prevY;
                }
            }

            //store previous bounce coordinates
            prevX = xCoordinates[i];
            prevY = yCoordinates[i];

            //cout << "xCoord[" << i << "]=" << xCoordinates[i] << " | yCoord[" << i << "]=" << yCoordinates[i] << endl;
        }

        if (k % 4 == 0)
        {
            cout << xCoordinates[4] << " " << yCoordinates[4] << endl;
        }
        else
        {
            cout << xCoordinates[k % 4] << " " << yCoordinates[k % 4] << endl;
        }
    }

    return 0;
}