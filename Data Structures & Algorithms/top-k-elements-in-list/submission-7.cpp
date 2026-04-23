class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mps;
        vector<int> results;
        for(int i =0;i< nums.size();i++)  
        {
            mps[nums[i]]++;
        }
        vector<pair<int, int>> vec(mps.begin(), mps.end());
        sort(vec.begin(), vec.end(), [](pair<int,int> &a, pair<int,int> &b) {
                return a.second > b.second;   
                });
        int i=0;
        while(i<k){
        results.push_back(vec[i].first);
        i++;
        }
    
        return results;

    }
};
