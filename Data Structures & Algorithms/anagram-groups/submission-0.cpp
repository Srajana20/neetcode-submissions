class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> sorted_elements;
        for(auto s : strs)
        {
            sort(s.begin(),s.end());
            sorted_elements.push_back(s);
        }
        unordered_map<string,int> mps;
        for(auto p : sorted_elements){
            mps[p]++;
        }
        for(auto s:mps )
        {
            vector<string> group;
            for(int i = 0; i< sorted_elements.size();i++){
                if(s.first == sorted_elements[i]){
                    group.push_back(strs[i]);
                }
            }
            ans.push_back(group);
        }
        return ans;
    }
};
