class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int>v;
	    sort(arr, arr+n);
	    for(int i=n-1; i>n-1-k; i--){
	        
	        v.push_back(arr[i]);
	    }
	    return v;
	    // code here
	}

};
