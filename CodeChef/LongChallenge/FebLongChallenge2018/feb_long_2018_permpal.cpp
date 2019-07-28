#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin>>t;
	


		


	while(t--)
	{
		std::vector<int> v(26);
		

		std::vector<int> v_a;
		std::vector<int> v_b;
		std::vector<int> v_c;
		std::vector<int> v_d;
		std::vector<int> v_e;
		std::vector<int> v_f;
		std::vector<int> v_g;
		std::vector<int> v_h;
		std::vector<int> v_i;
		std::vector<int> v_j;
		std::vector<int> v_k;
		std::vector<int> v_l;
		std::vector<int> v_m;
		std::vector<int> v_n;
		std::vector<int> v_o;
		std::vector<int> v_p;
		std::vector<int> v_q;
		std::vector<int> v_r;
		std::vector<int> v_s;
		std::vector<int> v_t;
		std::vector<int> v_u;
		std::vector<int> v_v;
		std::vector<int> v_w;
		std::vector<int> v_x;
		std::vector<int> v_y;
		std::vector<int> v_z;

		string str;

		cin>>str;
		int temp;

		
	
		

		for (int i = 0; i < str.length(); ++i)
		{
			
			temp = (int)str[i] - 97;
			v[temp]++;
						if(str[i] == 'a')
				v_a.push_back(i+1);
			else if(str[i] == 'b')
				v_b.push_back(i+1);
			else if(str[i] == 'c')
				v_c.push_back(i+1);
			else if(str[i] == 'd')
				v_d.push_back(i+1);
			else if(str[i] == 'e')
				v_e.push_back(i+1);
			else if(str[i] == 'f')
				v_f.push_back(i+1);
			else if(str[i] == 'g')
				v_g.push_back(i+1);
			else if(str[i] == 'h')
				v_h.push_back(i+1);
			else if(str[i] == 'i')
				v_i.push_back(i+1);
			else if(str[i] == 'j')
				v_j.push_back(i+1);
			else if(str[i] == 'k')
				v_k.push_back(i+1);
			else if(str[i] == 'l')
				v_l.push_back(i+1);
			else if(str[i] == 'm')
				v_m.push_back(i+1);
			else if(str[i] == 'n')
				v_n.push_back(i+1);
			else if(str[i] == 'o')
				v_o.push_back(i+1);
			else if(str[i] == 'p')
				v_p.push_back(i+1);
			else if(str[i] == 'q')
				v_q.push_back(i+1);
			else if(str[i] == 'r')
				v_r.push_back(i+1);
			else if(str[i] == 's')
				v_s.push_back(i+1);
			else if(str[i] == 't')
				v_t.push_back(i+1);
			else if(str[i] == 'u')
				v_u.push_back(i+1);
			else if(str[i] == 'v')
				v_v.push_back(i+1);
			else if(str[i] == 'w')
				v_w.push_back(i+1);
			else if(str[i] == 'x')
				v_x.push_back(i+1);
			else if(str[i] == 'y')
				v_y.push_back(i+1);
			else if(str[i] == 'z')
				v_z.push_back(i+1);


		}
		int odd_length = 0;
		int odd_index = -1;

		for (int i = 0; i < 26; ++i)
		{
			if(v[i] % 2 == 1)
				{
					odd_length++;
					odd_index = i;

				}
		}
		//cout<<"odd_length = "<<odd_length<<endl;
		//cout<<"odd_index = "<<odd_index<<endl;

		

		//string temp_2;

		if(odd_length > 1)
			cout<<"-1\n";
		else
		{
			if(odd_length == 0)
			{
				for (int i = 0; i < 26 ; ++i)
				{
						
						if(i == 0)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_a[j]<<" ";
							}
						}
						
						else if(i == 1)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_b[j]<<" ";
							}
						}
						else if(i == 2)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_c[j]<<" ";
							}
						}
						else if(i == 3)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_d[j]<<" ";
							}
						}
						else if(i == 4)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_e[j]<<" ";
							}
						}
						else if(i == 5)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_f[j]<<" ";
							}
						}
						else if(i == 6)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_g[j]<<" ";
							}
						}
						else if(i == 7)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_h[j]<<" ";
							}
						}
						else if(i == 8)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_i[j]<<" ";
							}
						}
						else if(i == 9)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_j[j]<<" ";
							}
						}
						else if(i == 10)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_k[j]<<" ";
							}
						}
						else if(i == 11)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_l[j]<<" ";
							}
						}
						else if(i == 12)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_m[j]<<" ";
							}
						}
						else if(i == 13)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_n[j]<<" ";
							}
						}
						else if(i == 14)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_o[j]<<" ";
							}
						}
						else if(i == 15)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_p[j]<<" ";
							}
						}
						else if(i == 16)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_q[j]<<" ";
							}
						}
						else if(i == 17)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_r[j]<<" ";
							}
						}
						else if(i == 18)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_s[j]<<" ";
							}
						}
						else if(i == 19)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_t[j]<<" ";
							}
						}
						else if(i == 20)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_u[j]<<" ";
							}
						}
						else if(i == 21)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_v[j]<<" ";
							}
						}
						else if(i == 22)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_w[j]<<" ";
							}
						}
						else if(i == 23)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_x[j]<<" ";
							}
						}
						else if(i == 24)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_y[j]<<" ";
							}
						}
						else if(i == 25)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_z[j]<<" ";
							}
						}


				}

				for (int i = 25; i >= 0 ; i--)
				{
						if(i == 0)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_a[j]<<" ";
							}
						}
						else if(i == 1)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_b[j]<<" ";
							}
						}
						else if(i == 2)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_c[j]<<" ";
							}
						}
						else if(i == 3)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_d[j]<<" ";
							}
						}
						else if(i == 4)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_e[j]<<" ";
							}
						}
						else if(i == 5)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_f[j]<<" ";
							}
						}
						else if(i == 6)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_g[j]<<" ";
							}
						}
						else if(i == 7)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_h[j]<<" ";
							}
						}
						else if(i == 8)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_i[j]<<" ";
							}
						}
						else if(i == 9)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_j[j]<<" ";
							}
						}
						else if(i == 10)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_k[j]<<" ";
							}
						}
						else if(i == 11)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_l[j]<<" ";
							}
						}
						else if(i == 12)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_m[j]<<" ";
							}
						}
						else if(i == 13)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_n[j]<<" ";
							}
						}
						else if(i == 14)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_o[j]<<" ";
							}
						}
						else if(i == 15)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_p[j]<<" ";
							}
						}
						else if(i == 16)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_q[j]<<" ";
							}
						}
						else if(i == 17)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_r[j]<<" ";
							}
						}
						else if(i == 18)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_s[j]<<" ";
							}
						}
						else if(i == 19)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_t[j]<<" ";
							}
						}
						else if(i == 20)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_u[j]<<" ";
							}
						}
						else if(i == 21)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_v[j]<<" ";
							}
						}
						else if(i == 22)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_w[j]<<" ";
							}
						}
						else if(i == 23)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_x[j]<<" ";
							}
						}
						else if(i == 24)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_y[j]<<" ";
							}
						}
						else if(i == 25)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_z[j]<<" ";
							}
						}
						


						
					

				}//end of second for loop
				cout<<"\n";
			}
			//start here

			else if(odd_length == 1)
			{
				for (int i = 0; i < 26 ; ++i)
				{
					if(i != odd_index)
					{
						if(i == 0)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_a[j]<<" ";
							}
						}
						else if(i == 1)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_b[j]<<" ";
							}
						}
						else if(i == 2)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_c[j]<<" ";
							}
						}
						else if(i == 3)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_d[j]<<" ";
							}
						}
						else if(i == 4)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_e[j]<<" ";
							}
						}
						else if(i == 5)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_f[j]<<" ";
							}
						}
						else if(i == 6)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_g[j]<<" ";
							}
						}
						else if(i == 7)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_h[j]<<" ";
							}
						}
						else if(i == 8)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_i[j]<<" ";
							}
						}
						else if(i == 9)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_j[j]<<" ";
							}
						}
						else if(i == 10)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_k[j]<<" ";
							}
						}
						else if(i == 11)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_l[j]<<" ";
							}
						}
						else if(i == 12)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_m[j]<<" ";
							}
						}
						else if(i == 13)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_n[j]<<" ";
							}
						}
						else if(i == 14)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_o[j]<<" ";
							}
						}
						else if(i == 15)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_p[j]<<" ";
							}
						}
						else if(i == 16)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_q[j]<<" ";
							}
						}
						else if(i == 17)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_r[j]<<" ";
							}
						}
						else if(i == 18)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_s[j]<<" ";
							}
						}
						else if(i == 19)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_t[j]<<" ";
							}
						}
						else if(i == 20)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_u[j]<<" ";
							}
						}
						else if(i == 21)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_v[j]<<" ";
							}
						}
						else if(i == 22)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_w[j]<<" ";
							}
						}
						else if(i == 23)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_x[j]<<" ";
							}
						}
						else if(i == 24)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_y[j]<<" ";
							}
						}
						else if(i == 25)
						{
							for (int j = 0; j < v[i]/2; ++j)
							{
								cout<<v_z[j]<<" ";
							}
						}
					}
					
						


				}
				//print odd index elements
							if(odd_index == 0)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_a[j]<<" ";
								}

							}
							else if(odd_index == 1)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_b[j]<<" ";
								}
							}
							else if(odd_index == 2)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_c[j]<<" ";
								}
							}
							else if(odd_index == 3)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_d[j]<<" ";
								}
							}
							else if(odd_index == 4)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_e[j]<<" ";
								}
							}
							else if(odd_index == 5)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_f[j]<<" ";
								}
							}
							else if(odd_index == 6)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_g[j]<<" ";
								}
							}
							else if(odd_index == 7)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_h[j]<<" ";
								}
							}
							else if(odd_index == 8)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_i[j]<<" ";
								}
							}
							else if(odd_index == 9)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_j[j]<<" ";
								}
							}
							else if(odd_index == 10)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_k[j]<<" ";
								}
							}
							else if(odd_index == 11)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_l[j]<<" ";
								}
							}
							else if(odd_index == 12)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_m[j]<<" ";
								}
							}
							else if(odd_index == 13)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_n[j]<<" ";
								}
							}
							else if(odd_index == 14)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_o[j]<<" ";
								}
							}
							else if(odd_index == 15)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_p[j]<<" ";
								}
							}
							else if(odd_index == 16)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_q[j]<<" ";
								}
							}
							else if(odd_index == 17)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_r[j]<<" ";
								}
							}
							else if(odd_index == 18)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_s[j]<<" ";
								}
							}
							else if(odd_index == 19)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_t[j]<<" ";
								}
							}
							else if(odd_index == 20)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_u[j]<<" ";
								}
							}else if(odd_index == 21)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_v[j]<<" ";
								}
							}else if(odd_index == 22)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_w[j]<<" ";
								}
							}else if(odd_index == 23)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_x[j]<<" ";
								}
							}else if(odd_index == 24)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_y[j]<<" ";
								}
							}else if(odd_index == 25)
							{
								for (int j = 0; j < v[odd_index]; ++j)
								{

									cout<<v_z[j]<<" ";
								}
							}

							

								

				for (int i = 25; i >= 0 ; i--)
				{
					if(i != odd_index)
					{
						if(i == 0)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_a[j]<<" ";
							}
						}
						else if(i == 1)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_b[j]<<" ";
							}
						}
						else if(i == 2)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_c[j]<<" ";
							}
						}
						else if(i == 3)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_d[j]<<" ";
							}
						}
						else if(i == 4)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_e[j]<<" ";
							}
						}
						else if(i == 5)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_f[j]<<" ";
							}
						}
						else if(i == 6)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_g[j]<<" ";
							}
						}
						else if(i == 7)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_h[j]<<" ";
							}
						}
						else if(i == 8)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_i[j]<<" ";
							}
						}
						else if(i == 9)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_j[j]<<" ";
							}
						}
						else if(i == 10)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_k[j]<<" ";
							}
						}
						else if(i == 11)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_l[j]<<" ";
							}
						}
						else if(i == 12)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_m[j]<<" ";
							}
						}
						else if(i == 13)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_n[j]<<" ";
							}
						}
						else if(i == 14)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_o[j]<<" ";
							}
						}
						else if(i == 15)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_p[j]<<" ";
							}
						}
						else if(i == 16)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_q[j]<<" ";
							}
						}
						else if(i == 17)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_r[j]<<" ";
							}
						}
						else if(i == 18)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_s[j]<<" ";
							}
						}
						else if(i == 19)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_t[j]<<" ";
							}
						}
						else if(i == 20)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_u[j]<<" ";
							}
						}
						else if(i == 21)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_v[j]<<" ";
							}
						}
						else if(i == 22)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_w[j]<<" ";
							}
						}
						else if(i == 23)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_x[j]<<" ";
							}
						}
						else if(i == 24)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_y[j]<<" ";
							}
						}
						else if(i == 25)
						{
							for (int j = v[i]/2; j < v[i]; ++j)
							{
								cout<<v_z[j]<<" ";
							}
						}
						
					}
						


						
					

				}//end of second for loop
				cout<<"\n";
			}
			
		}
		v.clear();
		v_a.clear();
		v_b.clear();
		v_c.clear();
		v_d.clear();
		v_e.clear();
		v_f.clear();
		v_g.clear();
		v_h.clear();
		v_i.clear();
		v_j.clear();
		v_k.clear();
		v_l.clear();
		v_m.clear();
		v_n.clear();
		v_o.clear();
		v_p.clear();
		v_q.clear();
		v_r.clear();
		v_s.clear();
		v_t.clear();
		v_u.clear();
		v_v.clear();
		v_w.clear();
		v_x.clear();
		v_y.clear();
		v_z.clear();
		



	}
	return 0;
}