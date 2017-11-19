#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		std::vector<int> rating, min, max, time_i;
		std::vector<string> is_rated, color;

		int ele;
		string str;
		int arr[n] = {0};
		int flag = 0;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);

			rating.push_back(ele);

			scanf("%d",&ele);

			min.push_back(ele);

			scanf("%d",&ele);

			max.push_back(ele);

			scanf("%d",&ele);

			time_i.push_back(ele);

			cin>>str;

			is_rated.push_back(str);

			cin>>str;

			color.push_back(str);







		}

		//if(color[4] == "black")
			//printf("yes\n");
		printf("wait\n");
		int found = 0;
		for (int i = 1; i < n; ++i)
		{
			//flag = 0;
			found = -1;
			for (int j = 0; j < i; ++j)
			{
				if(rating[j] < min[i] || rating[j] > max[i] || rating[i] < min[j] || rating[i] > max[j])
					continue;
				if(time_i[j] != time_i[i])
					continue;
				if(is_rated[j] != is_rated[i])
					continue;
				//if(color[j] == "white" && (color[i] == "black" || color[i] == "random") || (color[j] == "black" && (color[i] == "white" || color[i] == "random")) || (color[j] == "random" && (color[i] == "black" || color[i] == "white")) )
					//
				//if((color[j] == "white" && color[i] == "black") || (color[i] == "white" && color[j] == "black")  )
				//if( (color[i] == "white" && (color[j] == "black" || color[j] == "random")) || (color[j] == "white" && (color[i] == "black" || color[i] == "random")) || (color[i] == "white" && (color[j] == "black" || color[j] == "random")))
				
				if(!(color[i] == color[j] || (color[i] == "white" && color[j] == "black" ) || (color[j] == "white" && color[i] == "black" )))
					continue;
				if(arr[j] == 0)
				{
					arr[j] = 1;
					arr[i] = 1;
					found = j + 1;
					break;

				}
				
				


			}
			if(found == -1)
				printf("wait\n");
			else 
				printf("%d\n",found);

		}



	}

	return 0;
}