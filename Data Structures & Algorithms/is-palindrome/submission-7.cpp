class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                   s[i]=tolower(s[i]);
                  result=result+s[i];
            }    
        }
        cout<<result;
        string final1=result;
        reverse(result.begin(),result.end());
       
        if(final1==result){
            return true;
        }
        return false;
    }
};
