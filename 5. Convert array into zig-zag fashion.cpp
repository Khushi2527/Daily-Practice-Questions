class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    for(int i=1; i<n; i++){
	        if(arr[i]<arr[i-1])
	            swap(arr[i], arr[i-1]);
	        
	        if(arr[i]<arr[i+1] && i+1<n)
	            swap(arr[i], arr[i+1]);
	       
	       i++;
	        
	    }
	}
};
