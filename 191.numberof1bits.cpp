class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        int bit = 0;
        while(n){
            bit = n & 1;
            if(bit){
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};