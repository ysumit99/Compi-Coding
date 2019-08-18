//http://codeforces.com/contest/1206/problem/A

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


    int n,m;

    cin >> n ;

    vector<int> a(n);

    int arr[401] = {0};

    for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            arr[a[i]] = 1;
        }

    cin >> m;

    vector<int> b(m);

     for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            arr[b[i]] = 1;
        }
    
        //cout << a.size() << " | "  << b.size() << endl;
    bool found = false;

     for(int i = 0; i < n; i++)
       {
            for(int j = 0; j < m; j++)
            {

                //cout << arr[a[i] + b[j]] << " | " << a[i] << " | " << b[j] << endl;
                if(arr[a[i] + b[j]] == 0)
                    {   
                        
                        cout << a[i] << " " << b[j] << endl;
                        found = true;
                        break;
                    }
            }
            if(found)
                break;
        
       }

       //cout << "found = " << found;




    

  
	return 0;
}           