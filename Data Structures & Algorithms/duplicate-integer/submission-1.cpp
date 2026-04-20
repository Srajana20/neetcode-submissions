class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;

            for (int i = 0; i < nums.size(); i++) {
                    mp[nums[i]]++;   // increase count of that number
                        }

                            for (auto it : mp) {
                                    if (it.second > 1) {
                                                return true;   // duplicate found
                                                        }
                                                            }

                                                                return false;
    }
};