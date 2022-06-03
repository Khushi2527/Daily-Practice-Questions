int birthdayCakeCandles(vector<int> candles) {
    int n= candles.size();
    int mx=INT_MIN;
    int count=0;
    for(int i=0; i<n; i++){
        mx = max(mx,candles[i]);    
    }
    for(int i=0; i<n; i++){
        if(candles[i]==mx){
            count++;
        }
    }
    return count;
}
