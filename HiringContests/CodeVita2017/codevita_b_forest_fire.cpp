#include <bits/stdc++.h>
//using namespace std;


int main(int argc, char const *argv[])
{

	int m,n;

	std::cin>>m>>n;

	int x,y;
	std::cin>>x>>y;

	int arr[m][n];
	int visited[m][n]={0}; 

	char ele;
	int result = 0;
	x--;
	y--;

	std::vector<int> nearest;
	std::queue < std::pair<int, int > > bfs;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n ; ++j)
		{
			std::cin>>ele;
			if(ele == 'W')
				arr[i][j] = 0;
			else
				arr[i][j] = 1;

		}
	}
	int biggest = 0;
	nearest.push_back(1);

	if(arr[x][y] == 0)
		result = 0;
	else
	{
		visited[x][y] = 1; //visited
		arr[x][y] = 0;//make it as water so that not visited again!
		bfs.push(std::make_pair(x,y));
		biggest = 1;
		while(bfs.empty()==0)
		{
			x = bfs.front().first;
			y = bfs.front().second;
			bfs.pop();

			if(x - 1  >= 0 && y-1 >=0 && arr[x-1][y-1] == 1) {
				arr[x-1][y-1] = 0;
				visited[x-1][y-1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x-1,y-1));
				if(visited[x-1][y-1] > biggest)
					biggest = visited[x-1][y-1]; 

			}

			if(x - 1  >= 0 && y >=0 && arr[x-1][y] == 1) {
				arr[x-1][y] = 0;
				visited[x-1][y] = visited[x][y] + 1;
				bfs.push(std::make_pair(x-1,y));
				if(visited[x-1][y] > biggest)
					biggest = visited[x-1][y]; 

			}

			if(x - 1  >= 0 && y+1 < n && arr[x-1][y+1] == 1) {
				arr[x-1][y+1] = 0;
				visited[x-1][y+1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x-1,y+1));
				if(visited[x-1][y+1] > biggest)
					biggest = visited[x-1][y+1]; 

			}

			if(x >= 0 && y-1 >=0 && arr[x][y-1] == 1) {
				arr[x][y-1] = 0;
				visited[x][y-1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x,y-1));
				if(visited[x][y-1] > biggest)
					biggest = visited[x][y-1]; 

			}

			if(x >= 0 && y+1 < n && arr[x][y+1] == 1) {
				arr[x][y+1] = 0;
				visited[x][y+1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x,y+1));
				if(visited[x][y+1] > biggest)
					biggest = visited[x][y+1]; 

			}

			if(x + 1 < m && y-1 >=0 && arr[x+1][y-1] == 1) {
				arr[x+1][y-1] = 0;
				visited[x+1][y-1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x+1,y-1));
				if(visited[x+1][y-1] > biggest)
					biggest = visited[x+1][y-1]; 

			}

			if(x + 1  < m && y >=0 && arr[x+1][y] == 1) {
				arr[x+1][y] = 0;
				visited[x+1][y] = visited[x][y] + 1;
				bfs.push(std::make_pair(x+1,y));
				if(visited[x+1][y] > biggest)
					biggest = visited[x+1][y]; 

			}

			if(x + 1 < m && y+1 < n && arr[x+1][y+1] == 1) {
				arr[x+1][y+1] = 0;
				visited[x+1][y+1] = visited[x][y] + 1;
				bfs.push(std::make_pair(x+1,y+1));
				if(visited[x+1][y+1] > biggest)
					biggest = visited[x+1][y+1]; 

			}
		}//end of while
		result = biggest;
	}

	std::cout<< biggest <<std::endl;




	return 0;
}