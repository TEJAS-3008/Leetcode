#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //it is an iterator here
        auto it = unique(nums.begin(), nums.end());
        return it - nums.begin();
    }
};

// unique() removes consecutive duplicates by moving unique elements
// to the front of the vector.
//
// Example:
// [1,1,2,2,3] -> [1,2,3,2,3]
//
// It does NOT erase elements.
// It stores a position, not a numerical index.
// It returns an iterator pointing one position past the last unique element.
//
//        v
// [1,2,3,2,3]
//
// Number of unique elements:
// it - nums.begin()
//
// To actually remove the extra elements:
// nums.erase(it, nums.end());
//
// unique() only works correctly for duplicate removal when
// duplicates are adjacent, 