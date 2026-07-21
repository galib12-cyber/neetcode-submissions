class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        int j = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if ((bitset<32>(j ^ nums[i]).to_ulong()) == 0) {
                j++;
                continue;
            }

            else
                return j;
        }
    }
};
