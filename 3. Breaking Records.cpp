vector<int> breakingRecords(vector<int> scores) {
    int countMax=0;
    int countMin=0;
    int n=scores.size();
    int max= scores[0];
    int min= scores[0];
 
    for(int i=0; i<n; i++){
        if(scores[i]>max ){
            max = scores[i];
            countMax++;
        }
            
        else if(scores[i]<min){
            min = scores[i];
            countMin++;
        }     
    }
    return {countMax,countMin};
}
