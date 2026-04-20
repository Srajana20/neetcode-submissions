class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        int maxi=0;

        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        set  <int> st(nums.begin(),nums.end());
        auto it = st.begin();
        auto prev = next(st.begin());
        while(it != st.end()){
              if(*it == *prev+1){
                count++;
              }
              else{
                maxi=max(maxi,count);
                count=1;
              }
              prev = it++;
        }
        maxi=max(maxi,count);
        return maxi;
    }
};
