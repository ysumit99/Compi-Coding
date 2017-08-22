//https://www.codechef.com/problems/ELEVSTRS
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,v1,v2;

		scanf("%d %d %d",&n,&v1,&v2);

		float speed_stairs, speed_ele;

		speed_stairs = sqrt(2)*(float)n;
		speed_stairs /= (float)v1;

		speed_ele = (float)n/(float)v2;
		speed_ele*= (float)2;

		if(speed_ele > speed_stairs)
		    printf("Stairs\n");
		else
			printf("Elevator\n");

	}
	return 0;
}