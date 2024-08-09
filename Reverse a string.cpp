class Solution
{
    public:
    
    string reverseWord(string str){
        string ans = "";
        int n = str.length();
        for (int i = n - 1; i >= 0; i--) {
            ans.push_back(str[i]);
        }
        return ans;
    }
};
