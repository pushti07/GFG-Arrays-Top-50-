class Solution
{
    public:
    int peakElement(int arr[], int n){
        int start=1;
        int end = n-1;
        
        for(int i=0 ; i<n ; i++){
            if(n==1){
                return 0;
            }
            
            if(i==0){
                if(arr[i]>=arr[i+1]){
                    return i;
                }
            }
            
            else if(i==n-1){
                if(arr[i] >= arr[i-1]){
                    return i;
                }
            }
            
            else{
                if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){
                    return i;
                }
            }
        }
        return -1;
       
    }
};
