//https://leetcode.com/contest/weekly-contest-128/problems/pairs-of-songs-with-total-durations-divisible-by-60/


//naive solution Complexity Quadratic
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        
        for(int i = 0; i < time.size(); i++)
        {
            
            for(int j = i + 1; j < time.size(); j++)
            {
                if((time[i] + time[j]) % 60 == 0)
                    count++;
            }
        }
        
        return count;
    }
};

//Efficient code
 int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> c(60);
        int res = 0;
        for (int t : time) {
            res += c[(60 - t % 60) % 60];
            c[t % 60] += 1;
        }
        return res;
    }