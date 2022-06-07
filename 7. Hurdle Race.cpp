int hurdleRace(int k, vector<int> height) {
    int n= height.size();
    sort(height.begin(), height.end());
    if(height[n-1]>=k){
        return (height[n-1]-k);
    }
    return 0;

}
