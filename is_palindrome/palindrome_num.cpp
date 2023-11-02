class Solution {
public:
  bool isPalindrome(int x) {
    long long a = x;
    if (x < 0) {
      return false;
    }
    long long reversed = 0;
    while (a > 0) {
      reversed = reversed * 10 + a % 10;
      a /= 10;
    }
    return x == reversed;
  }
};
