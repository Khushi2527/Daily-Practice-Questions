int migratoryBirds(vector<int> arr) {
    int freq[6]={ };
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;        
    }
    
    int mx= 0;
    int ans=0;
    for(int i=0; i<6; i++){
        if(freq[i]>mx){
            mx= freq[i];
        }
    }
    for(int i=0; i<6; i++){            
        if(mx==freq[i]){
            return i;
        }
    }    
    return -1;
}
