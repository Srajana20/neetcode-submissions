class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                result.push_back(mp[rem]);
                result.push_back(i);
                return result;
            }
            else{
                mp.insert(make_pair(nums[i],i));
            }
        }
        return {-1,-1};
    }
};
