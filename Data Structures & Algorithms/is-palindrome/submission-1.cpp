class Solution {
   public:
    bool isPalindrome(string s) {
        string t;
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
        for (int i = 0, j = t.length() - 1; i < t.length() / 2; i++, j--) {
            if (t[i] != t[j]) {
                return false;
            }
        }

        return true;
    }
};
