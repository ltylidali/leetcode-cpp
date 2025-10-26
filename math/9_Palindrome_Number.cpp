class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        std::string s = std::to_string(x);
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        return s == rev;
    }
};