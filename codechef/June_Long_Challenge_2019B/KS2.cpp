//https://www.codechef.com/JUNE19B/problems/KS2
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	
	cin >> t;
	
	string str;
	while(t--){
	
		cin >> str;
		int sum_of_digits = 0, temp;
		
		for(int i = 0 ; i < str.length(); i++)
		{
			cout << str[i];
			sum_of_digits += str[i] - 48;
		}
		
		if(sum_of_digits % 10 == 0)
			temp = sum_of_digits / 10;
		else
			temp = sum_of_digits / 10 + 1;
			
		cout << (10*temp) - sum_of_digits;
		
		cout << "\n";
	
	}

return 0;


}