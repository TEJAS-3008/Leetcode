#include <iostream>
#include<climits>
#include <vector>

using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int minSubArrlen = INT_MAX;
        int left = 0;
        for(int right = 0;right < nums.size();right++){
            sum = sum + nums[right];
            while(sum >= target){
                minSubArrlen = min(minSubArrlen, right - left + 1);
                sum = sum - nums[left];
                left++;
            }
        }
        return (minSubArrlen == INT_MAX) ? 0 : minSubArrlen;
    }
};