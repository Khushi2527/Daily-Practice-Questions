int pageCount(int n, int p) {
    int ans;
    if(p==1 || p==n){
        return 0;
    }
    else if(n%2==0 && p%2!=0){
        ans = min(p/2, (n-p)/2 +1);
    }
    else{
        ans = min(p/2, (n-p)/2);
    }
    return ans;
}
