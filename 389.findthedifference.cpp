class Solution {
public:
  char findTheDifference(string s, string t) {
    char ans = 0;
    for (char each : s) {
      ans = ans ^ each;
    }

    for (char each : t) {
      ans = ans ^ each;
    }

    return ans;
  }
};
