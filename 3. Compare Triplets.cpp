vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int x=0, y=0;
    
    for(int i=0; i<a.size(); ++i){       
        if(a[i]>b[i]){
            x+=1;
        }
        else if(a[i]<b[i]){
            y+=1;
        }    
    }
    return {x,y};   
}
