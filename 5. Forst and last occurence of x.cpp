vector<int> find(int arr[], int n, int x){
    if(!binary_search(arr, arr+n, x)){
        return {-1,-1};
    }
    
    auto it1= lower_bound(arr, arr+n, x)-arr;
    auto it2= upper_bound(arr, arr+n, x)-arr-1;
    
    return {it1,it2};
}
