#include <bits/stdc++.h>
//using namespace std;


int main(int argc, char const *argv[])
{
	int n,ele;
	scanf("%d",&n);

	int first = 0,rest = 0;
	std::vector<int> v;

	for (int i = 0; i < n; ++i)
	{

		scanf("%d",&ele);
		v.push_back(ele);
		if(i == 0 )
			first = ele;
		else
			rest += ele;

	}
	//cout<<first<<" "<<rest<<endl;

int sn,left,flag = 0;
int result=1000000,offset,temp;
	for (int i = 1; i <= 500; ++i)
	{ left = rest;
		sn = (2*i+((n-1)*3));
		sn *= n;
		sn /= 2;
		//cout<<"sn = "<<sn<<endl;
			//temp = first - i;
				left+=(first-i);
		if(sn - i == left)
		{
			flag = 1;//possible
			temp = i;
			offset = 0;
			for (int j = 0; j < n ; ++j)
			{
				offset += abs(v[j]-temp);
				temp+=3;
			}

			if((offset/2) < result)
				result = offset/2;
			//cout<<"offset = "<<offset/2<<endl;
		}
	}

	if(flag == 0)
		printf("No");
	else
		printf("Yes %d",result);
	return 0;
}