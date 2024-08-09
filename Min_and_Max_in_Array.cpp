class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        pair <long long , long long> ans ;
        long long min = LLONG_MAX;
        long long max = LLONG_MIN;
        
        if (arr.size() == 1){
            // ans.push_back(arr[0]);
            // ans.push_back(arr[0]);
            ans = make_pair(arr[0] , arr[0]);
        }
        
        for(long long i = 0 ; i < arr.size() ; i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        
        // ans.push_back(min);
        
        for(long long i = 0 ; i < arr.size() ; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        ans = make_pair(min , max);
        
        return ans;
        
    }
};
