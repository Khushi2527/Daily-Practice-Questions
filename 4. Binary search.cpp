class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int s=0;
        int e=n;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]== k){
                return mid;
            }
            else if(arr[mid]>k){
                e=e-1;
            }
            else{
                s=s+1;
            }
        }
return -1;
        
    }
};
