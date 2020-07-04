#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, coordinate;
    int resultX, resultY, prevElement, elementCount;

    cin >> t;

    while (t--)
    {

        cin >> n;

        vector<int> xCoordinates, yCoordinates;
        elementCount = 0;

        for (int i = 0; i < 4 * n - 1; i++)
        {
            cin >> coordinate;
            xCoordinates.push_back(coordinate);

            cin >> coordinate;
            yCoordinates.push_back(coordinate);
        }

        cout << xCoordinates.size() << " | " << yCoordinates.size() << "\n";

        sort(xCoordinates.begin(), xCoordinates.end());
        sort(yCoordinates.begin(), yCoordinates.end());

        cout << "sorted elements\n";
        for (int i = 0; i < xCoordinates.size(); i++)
        {
            cout << "x = " << xCoordinates[i] << " | y = " << yCoordinates[i] << endl;
        }
        cout << "sorted elements\n";

        //get missing xCoordinate
        for (int i = 0; i < xCoordinates.size(); i++)
        {
            if (i == 0)
            {
                prevElement = xCoordinates[i];
                elementCount++;
                continue;
            }

            if (xCoordinates[i] == prevElement)
            {
                elementCount++;
            }
            else
            {
                if (elementCount % 2 == 1)
                {
                    resultX = prevElement;
                    break;
                }
                else
                {
                    elementCount = 1;
                }
            }
            prevElement = xCoordinates[i];
        }
        if (elementCount % 2 == 1)
        {
            resultX = prevElement;
        }

        elementCount = 0;
        //get missing yCoordinate
        for (int i = 0; i < yCoordinates.size(); i++)
        {
            if (i == 0)
            {
                prevElement = yCoordinates[i];
                elementCount++;
                continue;
            }

            if (yCoordinates[i] == prevElement)
            {
                elementCount++;
            }
            else
            {
                if (elementCount % 2 == 1)
                {
                    resultY = prevElement;
                    break;
                }
                else
                {
                    elementCount = 1;
                }
            }
            prevElement = yCoordinates[i];
        }

        if (elementCount % 2 == 1)
        {
            resultY = prevElement;
        }

        cout << resultX << " " << resultY << "\n";
    }

    return 0;
}
