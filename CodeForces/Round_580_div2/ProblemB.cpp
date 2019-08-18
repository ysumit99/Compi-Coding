//http://codeforces.com/contest/1206/problem/B


#include<bits/stdc++.h>

#define ll long long int

#define ff first
#define ss second

using namespace std;

typedef pair<int,int> pii;


int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);


    int n;

    cin >> n;

    int arr[n];

      
    ll deviation = 0;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] == 0)
            zeroCount++;
        else if(arr[i] < 0)
            negativeCount++;
        else if(arr[i] > 0)
            positiveCount++;
        
        if(!(arr[i] == 0))
            {
                deviation += abs(arr[i]) - 1;
                //cout << "abs = " << abs(arr[i]) - 1 << endl;
            }
        // else
        // {
        //     cout << "Zero is skipped!" << endl;
        // }
        
        
        
        //cout << "absolute diff = " << abs(arr[i]) - 1 << endl;
        
        //cout << "deviation => " << deviation << endl;
    
        
    }
  
    if(negativeCount % 2 == 0)  
        {
            deviation += zeroCount;
            //cout << "Inside if" << endl;
        }
    else
    {
       // cout << "Inside else" << endl;
        if(zeroCount == 0)
            deviation += 2;
        else
            {
                deviation++;
                deviation += --zeroCount;
            }
        
    }
    
    cout << deviation;



  
	return 0;
}           