void plusMinus(vector<int> arr) {
    
    int countPositive=0;
    int countNegative=0;
    int countZero =0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0){
            countPositive++;
        }
        else if(arr[i]<0){
            countNegative++;
        }
        else{
            countZero++;
        }                
    }
    cout << (float)countPositive/n <<endl;
        cout << (float)countNegative/n <<endl;
        cout << (float)countZero/n <<endl;
}
