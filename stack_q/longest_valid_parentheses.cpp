#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string stg) {
      int n = stg.length();
    stack<int> stk;
    stk.push(-1);
 
    int result = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (stg[i] == '(')
            stk.push(i);
         
        else
        {

            if (!stk.empty())
            {
                stk.pop();
            }
  
            if (!stk.empty())
                result = max(result, i - stk.top());

            else
                stk.push(i);
        }
    }
 
    return result;
        }
};
int main(){
    string s="()(()";
    Solution sln;

    cout<<sln.longestValidParentheses(s)<<endl;
    return 0;
}
