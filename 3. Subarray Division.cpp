int birthday(vector<int> s, int d, int m) {
    int n= s.size();
    int count=0;
    for(auto it=s.begin(); it!=s.end(); it++){
        int sum = accumulate(it, it+m, 0);
        if(sum==d){
            count++;
        }
    }
    return count;
}
