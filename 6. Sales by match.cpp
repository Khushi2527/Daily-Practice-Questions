int sockMerchant(int n, vector<int> ar) {
    int count=0;
    sort(ar.begin(), ar.end());
    for(int i=0; i<n; i++){
        if(ar[i]!=ar[i+1]){
            continue;
        }        
        if(ar[i]==ar[i+1]){
            count++;
            i++;
        }        
    }
return count;
}
