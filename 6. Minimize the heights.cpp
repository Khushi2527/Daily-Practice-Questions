class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr, arr+n);
        int mn = arr[0];
        int mx = arr[n-1];
        int diff= arr[n-1] - arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]-k<0){
                continue;
            }
            mn = min(arr[0]+k , arr[i]-k);
            mx = max(arr[n-1]-k , arr[i-1]+k);
            diff = min(diff, mx-mn);
        }
        return diff;
    }
};
