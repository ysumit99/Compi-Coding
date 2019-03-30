#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{

	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o*/

	int t;
	int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	int n,x,y;
	
	cin >> t;
	while(t--)
		{
			cin >> n;

			for (int i = 0; i < n; ++i)
			{
				cin >> x >> y;
			}

			

			if(y > arr[x])
				cout << "invalid" << endl;
			else
				cout << arr[x] - y << " " << 7 - y << endl;
		}

	return 0;
}