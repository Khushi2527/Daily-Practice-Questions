vector<int> countingSort(vector<int> arr) {
    vector<int>freq(100,0);
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    return freq;

}
