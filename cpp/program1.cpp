#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	int t;


	cin>>t;
	

	while(t--){

		int n,v1,v2;

		scanf("%d %d %d",&n,&v1,&v2);

		float stair,ele;

		ele = (2*n)/(float)v2;
		stair = (sqrt(2)*(float)n)/(float)v1;

		if(stair <= ele)
			printf("Stairs\n");
		else
			printf("Elevator\n");
	}
	return 0;
}