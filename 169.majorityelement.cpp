#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mxcount = 0;
        int res=-1;
        unordered_map<int,int>mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;//counts the frequency of each element
        }

        for(auto each_pair : mp){//stores each key-value pair in variable each_pair
            if(each_pair.second > mxcount){
                res = each_pair.first; //key 
                mxcount = each_pair.second; // value 
            }
        }
        return res;
    }
};