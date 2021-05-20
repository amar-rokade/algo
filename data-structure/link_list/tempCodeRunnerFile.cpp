#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector> 
#include <algorithm>
class Solution {
public:
    int minimumTotal(std::vector<std::vector<int>>& triangle) {
        int sum = triangle[0][0];
        for(int i=1; i<triangle.size();i++){
            sum = sum + *min_element(triangle[i].begin(), triangle[i].end());
        }
        return sum;
        
    }
};



int main(){
    Solution sn;
    // std::vector <std::vector<int>> v = {{-1000}};
    std::vector <std::vector<int>> v = {{-1},{2,3},{1,-1,-3}};
    std::cout<<sn.minimumTotal(v);
    return 0;
}