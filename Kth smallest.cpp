class Solution{
    public:
    
    int kthSmallest(int arr[], int l, int r, int k) {
        int len = r-l+1;
        // sort(arr+l , arr+r+1); 
        for(int i = 0 ; i <= len ; i++){
            sort(arr+l , arr+r+1); 
            return arr[l+k-1];
        }
        return -1;
    }
};
