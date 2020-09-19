//https://binarysearch.com/room/Weekly-Contest-25-BTseKJ0AyN
//Accepted
#include "solution.hpp"
using namespace std;

class Solution
{

public:
    bool check_number(string str)
    {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i]) == false)
                return false;
        return true;
    }

public:
    int solve(vector<string> &ops)
    {
        // Write your code here

        stack<int> s;
        int sum;

        for (int i = 0; i < ops.size(); i++)
        {

            if (check_number(ops[i]) && stoi(ops[i]) >= 0)
            {
                s.push(stoi(ops[i]));
            }
            else if (ops[i] == "POP")
            {
                if (!s.empty())
                {
                    s.pop();
                }
                else
                {
                    return -1;
                }
            }
            else if (ops[i] == "DUP")
            {
                if (!s.empty())
                {
                    s.push(s.top());
                }
                else
                {
                    return -1;
                }
            }
            else if (ops[i] == "+")
            {
                if (s.size() < 2)
                {
                    return -1;
                }
                else
                {
                    sum = s.top();
                    s.pop();
                    sum += s.top();
                    s.pop();
                    s.push(sum);
                }
            }
            else if (ops[i] == "-")
            {
                if (s.size() < 2)
                {
                    return -1;
                }
                else
                {
                    sum = s.top();
                    s.pop();
                    sum -= s.top();
                    s.pop();
                    s.push(sum);
                }
            }
            else
            {
                return -1;
            }
        }

        return s.top();
    }
};
