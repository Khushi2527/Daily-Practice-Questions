int lonelyinteger(vector<int> a) {
    int ans;
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++){
        if(a[i]!= a[i+1]){
            return a[i];
            break;
        }
        i++;        
    }
    return -1;
}
