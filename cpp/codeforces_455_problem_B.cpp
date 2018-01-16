#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;

    float arr[101];
    float result[101];
    //result[1] = 1;

    arr[2] = 0.66;

    //result[2] = 2;
    arr[3] =  0.66;
    //result[3] = 4;

    float diff = 0.06;
    int temp;

    for (int i = 4; i <= 100; i+=2)
     {

     	temp = i*(i+1)/2;
     	arr[i] = arr[i-2] - diff;
     	//cout<<arr[i-2]-diff<<endl;
     	result[i] = temp * (arr[i-2] - diff);

     	//arr[i] = round(arr[i]);

     	//result[i] = ()

     	temp = (i+1)*(i+2)/2;
     	arr[i+1] = arr[i+1-2] - diff;

     	result[i+1] = temp * (arr[i+1-2] - diff);

     	diff/=2;
     } 
     //cin>>n;
     float temp2;
     temp2 = result[n];
		if(n == 1)
			cout<<1;
		else if(n == 2)
			cout<<2;
		else if(n == 3)
			cout<<4;
		else
		{
		     cout<<int(temp2 + 0.5);
		}


	return 0;
}