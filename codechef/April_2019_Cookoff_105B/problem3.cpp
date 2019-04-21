//https://www.codechef.com/COOK105B/problems/PEWDSVTS
/*//Not Correct
#include<bits/stdc++.h>

using namespace std;

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie (0);


    int t;
    long long int n, a, b, x, y, z, days, users_gained, remain;
    long long int res;
    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b >> x >> y >> z;

        res = 0;
        std::vector<long long int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        // (z - b + y) / y;
        days = (z - b + y) / y;
        cout << "days = " << days;

        if(days == 1)
        	{
        		cout << "RIP" << endl;
        		continue;

        	}

        //cout << "days = " << days << endl;
        users_gained = a + (days - 1)*x;
        //cout << "users_gained = " << users_gained << endl;

        remain = z - users_gained;

       // cout << "remain = " << remain << endl;
        if((z - b + y) % y == 0)
        {
            //cout << "if" << endl;
            while(remain > 0)
            {
                if(v[0] == 0)
                    break;
                remain -= v[0];
                res++;
                v[0] /= 2;
                sort(v.rbegin(), v.rend());


            }

            if(remain == 0)
            {
                if(v[0] != 0)
                {
                    res++;
                    cout << res << endl;
                }
                else
                    cout << "RIP" << endl;

            }
            else if(remain < 0)
            {
            	cout << res << endl;
            }
            else
            {
            	 cout << "RIP" << endl;
            }

        }
        else
        {

            //cout << "else" << endl;
            while(remain > 0)
            {
                //cout << "v[0] = " << v[0] << endl;
                if(v[0] == 0)
                    break;
                remain -= v[0];
                res++;
                v[0] /= 2;
                sort(v.rbegin(), v.rend());


            }

            if(remain <= 0)
                cout << res << endl;
            else
                cout << "RIP" << endl;
        }



    }

    return 0;
}*/

//Accepted
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int

#define vec vector < int >
#define vecp vector < pair < int , int > >
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define debug(x)   cerr<<#x<<": "<<x<<endl
#define pii pair < int , int >
#define pll pair < ll , ll > 
#define fr(i , a , b) for(int  i = a ; i <= b ; i++)
#define all(v) v.begin() , v.end()
#define mod  1000000007
#define N 100005
#define mod1 1000000007
#define mod2 1000000009
#define bitcnt __builtin_popcount
#define PI acos(-1)
#define endl "\n" 
#define mid  (s+e)/2
#define MAX 1000006
const ll inf = (ll)1e18 + 10;
ll c[N];
priority_queue < int > q;
signed  main(){
  fast;
  //freopen("input.txt" , "r" , stdin);
  //freopen("output.txt" , "w" , stdout);
  
  ll t , n , a , b , x , y , z , ans;
  ll da , db , need;
  cin>>t;
  while(t--){
  	ans = 0;
  	cin>>n >>a >>b >>x >>y >>z;
  	for(int i = 1 ; i<=n ; i++)
  	   cin>>c[i] , q.push(c[i]);
  
    da = (z-a)/x;
    if((z-a)%x > 0) da++;
    
    db = (z - b)/y;
    if((z-b)%y > 0) db++;
    
    if(da < db){
    	cout<<"0\n";
    	while(q.size() > 0) q.pop();
    	continue;
	}
	
	need = z - (a + (db-1) * x);
	while(need > 0 && q.size() > 0){
		int k = q.top();
		q.pop();
		need -= k;
		ans++;
		if(k/2 > 0)
		q.push(k/2);
	}
	
	if(need <= 0)
		cout<<ans<<endl;
		
	
	else
		cout<<"RIP\n";
	
	while(q.size() > 0) q.pop();
	
   }
   return 0;
}










 
