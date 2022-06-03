int diagonalDifference(vector<vector<int>> arr) {
    int ltr=0;
    int rtl=0;
    int n=arr.size();
    for(int i=0; i<n; ++i){
        ltr += arr[i][i];
        rtl += arr[i][n-i-1];
    }
    return abs(rtl - ltr);

}
