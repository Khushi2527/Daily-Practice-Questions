string angryProfessor(int k, vector<int> a) {
    int count=0;
    string ans;
    for(int i=0; i<a.size(); i++){
        if(a[i]<=0){
            count++;
        }
    }
    if(count>=k)
        ans= "NO";
    else 
        ans= "YES";
        
    return ans;

}
