//problem 1
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool sortbysec(const pair< string, pair<int, int> > &a,
			const pair< string, pair<int, int> > &b )

{
	return (a.second.first > b.second.first);
}

int main(int argc, char const *argv[])
{
/*
	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o*/


	int t;
	string team1,team2, ignore;
	int goal1, goal2, firstOccur1 = 0,firstOccur2 = 0;

	cin >> t;

	while(t--)
	{


		std::vector< pair <string, pair<int, int> > >points(4);
	

		for (int i = 0; i < 12; ++i)
		{
			 cin >> team1 >> goal1 >> ignore >>  goal2 >> team2;
			 firstOccur1= 0;
			 firstOccur2= 0;
			for (int i = 0; i < 4; ++i)
			{


				if(points[i].first == team1)
					{
						firstOccur1 = 1;

						if(goal1 > goal2)
						{
							points[i].second.first += 3;
							points[i].second.second += goal1 - goal2;
						}
						else if(goal1 == goal2)
						{
							points[i].second.first += 1;


						}
						else if(goal1 < goal2)
						{
							points[i].second.second += goal1 - goal2;
						}
					}

				if(points[i].first == team2)
					{
						firstOccur2 = 1;
						if(goal2 > goal1)
						{
							points[i].second.first += 3;
							points[i].second.second += goal2 - goal1;

						}
						else if(goal2 == goal1)
						{
							points[i].second.first += 1;
						}
						else if(goal2 < goal1)
						{
							points[i].second.second += goal2 - goal1;
						}
					}


			}

			cout << "firstOccur1 = " << firstOccur1 << endl;
			cout << "firstOccur2 = " << firstOccur2 << endl;

			if(firstOccur1 == 0)
				{
					if(goal1 > goal2)
					{
						points.push_back(make_pair(team1, make_pair(3, goal1 - goal2)));

					}
					else if(goal1 <= goal2)
					{
						points.push_back(make_pair(team1, make_pair(0, goal1 - goal2)));

					}

				}
			 if(firstOccur2 == 0)
				{
					if(goal2 > goal1)
					{
						points.push_back(make_pair(team2, make_pair(3, goal2 - goal1)));

					}
					else if(goal2 <= goal1)
					{
						points.push_back(make_pair(team2, make_pair(0, goal2 - goal1)));

					}

				}


		}

		cout << "points size = " << points.size() << endl;

		sort(points.begin(), points.end(), sortbysec);

		for (int i = 0; i < 4; ++i)
		{
			cout << points[i].first << " " << points[i].second.first << " " << points[i].second.second << endl;
		}
		//cout << points[0].first << " " << points[1].first << endl;


}



	return 0;
}