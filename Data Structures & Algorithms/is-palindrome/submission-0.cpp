class Solution {
   public:
    bool isPalindrome(string s) {
        string t;
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
         string r = t;
        reverse(r.begin(),r.end());
        
        if (r == t)
            return true;

        else
            return false;
    }
};
