#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>count;
        vector<int>temp;
        for(int i = 0;i < nums.size();i++){
            if(count[nums[i]] < 2){
                temp.push_back(nums[i]);
                count[nums[i]]++;
            }
        }
        nums = temp;
        return temp.size();
    }
};

//time complexity O(nlogn) n  for the loop, log(n) for maping
//space compelxity O(n)
//two pointer approach might take O(n) time complexity?

