#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/* factorial */
ll factorial(ll n)
{
    ll result = 1;

    while(n >= 1)
        result *= n--;

    return result;
}

/* Combination =>  nCr */
ll combination(ll n, ll r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

/**
* Generate Test Case ===> To be copied from java version latter
*/
void generateTestCase(string filePath, int testCount){
    
}

int main()
{

    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--)
    {
        
    }
    return 0;
}