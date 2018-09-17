//https://www.hackerearth.com/challenge/hiring/esko-freshers-hiring-challenge/problems/03fd935da1d84603953113b1d5aee4fe/
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	

	string depat,arriv;
	string str; // take input
	int count = 0; //Max possible inputs


	cin >> depat >> arriv;
	
	vector<string>temp;

	vector< vector<string> >arr(20);
	while(cin >> str)
	{
		
        temp.push_back(str);
		
        
        cin >> str; //arr city
        temp.push_back(str);
	    
	    cin >> str; //cost
        temp.push_back(str);
	
	    arr.push_back(temp);
	    
	    for(int i = 0 ; i < arr.size(); i++)
	        cout << arr[i][0] << endl;
	    
	    temp.erase(temp.begin(), temp.end());
	    
	    
		count++;
	}

	sort(arr.begin(), arr.end());

	/*for (int i = 0; i < count; ++i)
	{
		cout << arr[i][0] << " " << arr[i][1] << " " <<arr[i][2] <<endl;
	}
    */
    cout << arr.size();
    

	std::vector< pair< vector<string> , int > > v;

	/*while(count)
	{

	}*/


	return 0;
}