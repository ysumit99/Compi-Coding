#include <bits/stdc++.h>

//using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	std::vector<int> p;//={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303};
	std::vector<int>::iterator it;

	/*


	*/


p.push_back(2);
p.push_back(3);
p.push_back(5);
p.push_back(7);
p.push_back(11);
p.push_back(13);
p.push_back(17);
p.push_back(19);
p.push_back(23);
p.push_back(29);
p.push_back(31);
p.push_back(37);
p.push_back(41);
p.push_back(43);
p.push_back(47);
p.push_back(53);
p.push_back(59);
p.push_back(61);
p.push_back(67);
p.push_back(71);
p.push_back(73);
p.push_back(79);
p.push_back(83);
p.push_back(89);
p.push_back(97);
p.push_back(101);
p.push_back(103);
p.push_back(107);
p.push_back(109);
p.push_back(113);
p.push_back(127);
p.push_back(131);
p.push_back(137);
p.push_back(139);
p.push_back(149);
p.push_back(151);
p.push_back(157);
p.push_back(163);
p.push_back(167);
p.push_back(173);
p.push_back(179);
p.push_back(181);
p.push_back(191);
p.push_back(193);
p.push_back(197);
p.push_back(199);
p.push_back(211);
p.push_back(223);
p.push_back(227);
p.push_back(229);
p.push_back(233);
p.push_back(239);
p.push_back(241);
p.push_back(251);
p.push_back(257);
p.push_back(263);
p.push_back(269);
p.push_back(271);
p.push_back(277);
p.push_back(281);
p.push_back(283);
p.push_back(293);
p.push_back(307);
p.push_back(311);
p.push_back(313);
p.push_back(317);
p.push_back(331);
p.push_back(337);
p.push_back(347);
p.push_back(349);
p.push_back(353);
p.push_back(359);
p.push_back(367);
p.push_back(373);
p.push_back(379);
p.push_back(383);
p.push_back(389);
p.push_back(397);
p.push_back(401);
p.push_back(409);
p.push_back(419);
p.push_back(421);
p.push_back(431);
p.push_back(433);
p.push_back(439);
p.push_back(443);
p.push_back(449);
p.push_back(457);
p.push_back(461);
p.push_back(463);
p.push_back(467);
p.push_back(479);
p.push_back(487);
p.push_back(491);
p.push_back(499);
p.push_back(503);
p.push_back(509);
p.push_back(521);
p.push_back(523);
p.push_back(541);
p.push_back(547);
p.push_back(557);
p.push_back(563);
p.push_back(569);
p.push_back(571);
p.push_back(577);
p.push_back(587);
p.push_back(593);
p.push_back(599);
p.push_back(601);
p.push_back(607);
p.push_back(613);
p.push_back(617);
p.push_back(619);
p.push_back(631);
p.push_back(641);
p.push_back(643);
p.push_back(647);
p.push_back(653);
p.push_back(659);
p.push_back(661);
p.push_back(673);
p.push_back(677);
p.push_back(683);
p.push_back(691);
p.push_back(701);
p.push_back(709);
p.push_back(719);
p.push_back(727);
p.push_back(733);
p.push_back(739);
p.push_back(743);
p.push_back(751);
p.push_back(757);
p.push_back(761);
p.push_back(769);
p.push_back(773);
p.push_back(787);
p.push_back(797);
p.push_back(809);
p.push_back(811);
p.push_back(821);
p.push_back(823);
p.push_back(827);
p.push_back(829);
p.push_back(839);
p.push_back(853);
p.push_back(857);
p.push_back(859);
p.push_back(863);
p.push_back(877);
p.push_back(881);
p.push_back(883);
p.push_back(887);
p.push_back(907);
p.push_back(911);
p.push_back(919);
p.push_back(929);
p.push_back(937);
p.push_back(941);
p.push_back(947);
p.push_back(953);
p.push_back(967);
p.push_back(971);
p.push_back(977);
p.push_back(983);
p.push_back(991);
p.push_back(997);
p.push_back(1009);
p.push_back(1013);
p.push_back(1019);
p.push_back(1021);
p.push_back(1031);
p.push_back(1033);
p.push_back(1039);
p.push_back(1049);
p.push_back(1051);
p.push_back(1061);
p.push_back(1063);
p.push_back(1069);
p.push_back(1087);
p.push_back(1091);
p.push_back(1093);
p.push_back(1097);
p.push_back(1103);
p.push_back(1109);
p.push_back(1117);
p.push_back(1123);
p.push_back(1129);
p.push_back(1151);
p.push_back(1153);
p.push_back(1163);
p.push_back(1171);
p.push_back(1181);
p.push_back(1187);
p.push_back(1193);
p.push_back(1201);
p.push_back(1213);
p.push_back(1217);
p.push_back(1223);
p.push_back(1229);
p.push_back(1231);
p.push_back(1237);
p.push_back(1249);
p.push_back(1259);
p.push_back(1277);
p.push_back(1279);
p.push_back(1283);
p.push_back(1289);
p.push_back(1291);
p.push_back(1297);
p.push_back(1301);
p.push_back(1303);
p.push_back(1307);
p.push_back(1319);
p.push_back(1321);
p.push_back(1327);	


	/* */
	scanf("%d",&t);
	std::string str;
	while(t--)
	{
		std::cin>>str;
		std::vector<int> v;
		if(str[0] == '0')
			v.push_back(0);
		else if(str[0] == '1')
			v.push_back(1);
		else if(str[0] == '2')
			v.push_back(2);
		else if(str[0] == '3')
			v.push_back(3);
		else if(str[0] == '4')
			v.push_back(4);
		else if(str[0] == '5')
			v.push_back(5);
		else if(str[0] == '6')
			v.push_back(6);
		else if(str[0] == '7')
			v.push_back(7);
		else if(str[0] == '8')
			v.push_back(8);
		else if(str[0] == '9')
			v.push_back(9);
		else if(str[0] == 'A')
			v.push_back(10);
		else if(str[0] == 'B')
			v.push_back(11);
		else if(str[0] == 'C')
			v.push_back(12);
		else if(str[0] == 'D')
			v.push_back(13);
		else if(str[0] == 'E')
			v.push_back(14);
		else if(str[0] == 'F')
			v.push_back(15);
		else if(str[0] == 'G')
			v.push_back(16);
		else if(str[0] == 'H')
			v.push_back(17);
		else if(str[0] == 'I')
			v.push_back(18);
		else if(str[0] == 'J')
			v.push_back(19);
		else if(str[0] == 'K')
			v.push_back(20);
		else if(str[0] == 'L')
			v.push_back(21);
		else if(str[0] == 'M')
			v.push_back(22);
		else if(str[0] == 'N')
			v.push_back(23);
		else if(str[0] == '0')
			v.push_back(24);
		else if(str[0] == 'P')
			v.push_back(25);
		else if(str[0] == 'Q')
			v.push_back(26);
		else if(str[0] == 'R')
			v.push_back(27);
		else if(str[0] == 'S')
			v.push_back(28);
		else if(str[0] == 'T')
			v.push_back(29);
		else if(str[0] == 'U')
			v.push_back(30);
		else if(str[0] == 'V')
			v.push_back(31);
		else if(str[0] == 'W')
			v.push_back(32);
		else if(str[0] == 'X')
			v.push_back(33);
		else if(str[0] == 'Y')
			v.push_back(34);
		else if(str[0] == 'Z')
			v.push_back(35);
		
		//Second character

		if(str[1] == '0')
			v.push_back(0);
		else if(str[1] == '1')
			v.push_back(1);
		else if(str[1] == '2')
			v.push_back(2);
		else if(str[1] == '3')
			v.push_back(3);
		else if(str[1] == '4')
			v.push_back(4);
		else if(str[1] == '5')
			v.push_back(5);
		else if(str[1] == '6')
			v.push_back(6);
		else if(str[1] == '7')
			v.push_back(7);
		else if(str[1] == '8')
			v.push_back(8);
		else if(str[1] == '9')
			v.push_back(9);
		else if(str[1] == 'A')
			v.push_back(10);
		else if(str[1] == 'B')
			v.push_back(11);
		else if(str[1] == 'C')
			v.push_back(12);
		else if(str[1] == 'D')
			v.push_back(13);
		else if(str[1] == 'E')
			v.push_back(14);
		else if(str[1] == 'F')
			v.push_back(15);
		else if(str[1] == 'G')
			v.push_back(16);
		else if(str[1] == 'H')
			v.push_back(17);
		else if(str[1] == 'I')
			v.push_back(18);
		else if(str[1] == 'J')
			v.push_back(19);
		else if(str[1] == 'K')
			v.push_back(20);
		else if(str[1] == 'L')
			v.push_back(21);
		else if(str[1] == 'M')
			v.push_back(22);
		else if(str[1] == 'N')
			v.push_back(23);
		else if(str[1] == '0')
			v.push_back(24);
		else if(str[1] == 'P')
			v.push_back(25);
		else if(str[1] == 'Q')
			v.push_back(26);
		else if(str[1] == 'R')
			v.push_back(27);
		else if(str[1] == 'S')
			v.push_back(28);
		else if(str[1] == 'T')
			v.push_back(29);
		else if(str[1] == 'U')
			v.push_back(30);
		else if(str[1] == 'V')
			v.push_back(31);
		else if(str[1] == 'W')
			v.push_back(32);
		else if(str[1] == 'X')
			v.push_back(33);
		else if(str[1] == 'Y')
			v.push_back(34);
		else if(str[1] == 'Z')
			v.push_back(35);
		
		int larger;
		
		(v[0] >= v[1]) ? (larger = v[0]) : (larger = v[1]);

		int sum;
		int flag = 0;

		for (int i = larger + 1; i <= 36 ; ++i)
		{
			sum = (v[0] * i) + v[1];
			//flag2 = 0;
			it = find (p.begin(), p.end(), sum);
			  if (it != p.end())
			    {
			    	
					std::cout<<i<<" ";
			    	
			    	flag = 1;
			    }
			  


  
		}
		if(flag == 0)
			std::cout<<"NONE";
		if(t!=0)
			std::cout<<'\n';

		
		
	}
	return 0;
}