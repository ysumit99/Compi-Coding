//https://www.hackerearth.com/challenge/competitive/october-circuits-17/algorithm/card-game-1-44e9f4e7/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    scanf("%d",&n1);
    vector<long long int> v1,v2;
    long long int ele;
    long long int largest;
    long long int sum = 0;
    for(int i = 0 ;i < n1; i++)
    {
        scanf("%lld",&ele);
        v1.push_back(ele);
    }
    scanf("%d",&n2);
    for(int i = 0 ;i < n2; i++)
    {
        scanf("%lld",&ele);
        v2.push_back(ele);
    }
    sort(v2.begin(),v2.end());
    
    largest = v2[n2-1];
    largest++;
    //cout<<v2[n2-1]
    //cout<<big;
    //printf("%lld",largest);
    
    for(int i = 0; i < n1; i++)
    {
        if(v1[i] <= largest)
            sum+=(largest - v1[i]);
            
    }
    printf("%lld",sum);
    
    
    return 0;
}
