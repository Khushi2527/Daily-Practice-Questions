void miniMaxSum(vector<int> arr) {
    long long int sum=0;
    for(int i=0; i<=5; i++){
        sum+= arr[i];
    }
    sort(arr.begin(), arr.end());
    cout<<sum - arr[4]<<" "<< sum-arr[0]; 

}
