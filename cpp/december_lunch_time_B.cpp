#include<bits/stdc++.h>

using namespace std;

int return_sum(unsigned long long int a)
{
    int sum = 0;
        long long int temp = a;



        while(temp > 0)
        {

            sum+=(temp % 10);
            temp /= 10;
        }

    if(sum > 9)
    {
         //cout<<sum<<endl;
        return_sum(sum);
    }
    else
        return sum;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--)
    {
        double a,n,r;

        cin>>a>>n;
        // r = pow(a,n);
         //cout<<"r="<<r<<endl;

         double value = a+n;
         value = fmod(value,9.0);

         if(value == (double)0)
            cout<<9<<"\n";
        else
            cout<<value<<"\n";




    }
    return 0;
}
