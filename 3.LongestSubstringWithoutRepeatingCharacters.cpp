#include<iostream>
#include<unordered_set>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        unordered_set<char> window;
        int left = 0;
        for(int right = 0;right < s.size();right++){
            while(window.contains(s[right])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            longest = max(longest, right - left + 1);
        }
        return longest;

    }
};