#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	string s,t1;

	scanf("%d",&t);

	while(t--)
	{

		cin>>s>>t1;
		std::vector<int> v1;
		std::vector<int> v2;
		std::vector<int> v3;
		std::vector<int> v4;

		std::set<int> myset;
		std::set<int> myset2;

		if(s.length() == 1)
			printf("B\n");
		else
		{
			for (int i = 0; i < s.length(); ++i)
			{
				if(s[i] == 'a')
					v1.push_back(1);
				else if(s[i] == 'b')
					v1.push_back(2);
				else if(s[i] == 'c')
					v1.push_back(3);
				else if(s[i] == 'd')
					v1.push_back(4);
				else if(s[i] == 'e')
					v1.push_back(5);
				else if(s[i] == 'f')
					v1.push_back(6);
				else if(s[i] == 'g')
					v1.push_back(7);
				else if(s[i] == 'h')
					v1.push_back(8);
				else if(s[i] == 'i')
					v1.push_back(9);
				else if(s[i] == 'j')
					v1.push_back(10);
				else if(s[i] == 'k')
					v1.push_back(11);
				else if(s[i] == 'l')
					v1.push_back(12);
				else if(s[i] == 'm')
					v1.push_back(13);
				else if(s[i] == 'n')
					v1.push_back(14);
				else if(s[i] == 'o')
					v1.push_back(15);
				else if(s[i] == 'p')
					v1.push_back(16);
				else if(s[i] == 'q')
					v1.push_back(17);
				else if(s[i] == 'r')
					v1.push_back(18);
				else if(s[i] == 's')
					v1.push_back(19);
				else if(s[i] == 't')
					v1.push_back(20);
				else if(s[i] == 'u')
					v1.push_back(21);
				else if(s[i] == 'v')
					v1.push_back(22);
				else if(s[i] == 'w')
					v1.push_back(23);
				else if(s[i] == 'x')
					v1.push_back(24);
				else if(s[i] == 'y')
					v1.push_back(25);
				else if(s[i] == 'z')
					v1.push_back(26);

				if(t1[i] == 'a')
					v2.push_back(1);
				else if(t1[i] == 'b')
					v2.push_back(2);
				else if(t1[i] == 'c')
					v2.push_back(3);
				else if(t1[i] == 'd')
					v2.push_back(4);
				else if(t1[i] == 'e')
					v2.push_back(5);
				else if(t1[i] == 'f')
					v2.push_back(6);
				else if(t1[i] == 'g')
					v2.push_back(7);
				else if(t1[i] == 'h')
					v2.push_back(8);
				else if(t1[i] == 'i')
					v2.push_back(9);
				else if(t1[i] == 'j')
					v2.push_back(10);
				else if(t1[i] == 'k')
					v2.push_back(11);
				else if(t1[i] == 'l')
					v2.push_back(12);
				else if(t1[i] == 'm')
					v2.push_back(13);
				else if(t1[i] == 'n')
					v2.push_back(14);
				else if(t1[i] == 'o')
					v2.push_back(15);
				else if(t1[i] == 'p')
					v2.push_back(16);
				else if(t1[i] == 'q')
					v2.push_back(17);
				else if(t1[i] == 'r')
					v2.push_back(18);
				else if(t1[i] == 's')
					v2.push_back(19);
				else if(t1[i] == 't')
					v2.push_back(20);
				else if(t1[i] == 'u')
					v2.push_back(21);
				else if(t1[i] == 'v')
					v2.push_back(22);
				else if(t1[i] == 'w')
					v2.push_back(23);
				else if(t1[i] == 'x')
					v2.push_back(24);
				else if(t1[i] == 'y')
					v2.push_back(25);
				else if(t1[i] == 'z')
					v2.push_back(26);
				
				
				
			}

			
			



			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end());

			//logic to decide winner between A and B !!
			std::set_difference(  v1.begin(), v1.end(),
                        v2.begin(), v2.end(),
                        std::back_inserter( v3 ) );

			/*for (int i = 0; i < v3.size(); ++i)
			{	
				printf("v3%d ",v3[i]);
			}*/
			int flag = 0;
			for (int i = 0; i < v3.size(); ++i)
			{
				if(i != 0)
				{
					if(v3[i-1] == v3[i])
					{
						flag = 1;
						break;
					}
				}
			}

			
			/*cout<<endl;
			for (int i = 0; i < v4.size(); ++i)
			{
				printf("v4%d ",v4[i]);
			}*/

			if(flag == 1)
				printf("A\n");
			else
			{

				printf("B\n");
				/*myset.insert (v1.begin(),v1.end());
			myset2.insert (v2.begin(),v2.end());

			std::set_difference(  myset.begin(), myset.end(),
                        myset2.begin(), myset2.end(),
                        std::back_inserter( v4 ) );*/
			}
			
			

		}


	}
	return 0;
}