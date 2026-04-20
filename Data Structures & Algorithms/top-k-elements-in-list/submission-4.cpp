class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;

        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        
        int count=0;
        while(count<k && !pq.empty()){
            count++;
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
