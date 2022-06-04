long long int maxSum(int arr[], int n)
{
    vector<int>v;
    sort(arr, arr+n);
    long long int sum=0;
    for(int i=0; i<=n/2; i++){
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    for(int i=0; i<n-1; i++){
         sum = sum + abs(v[i]-v[i+1]);
    }
    sum= sum + abs(v[n-1]-v[0]);
    return sum;
    
}
