vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    for(int i=0; i<n/2; i++){
        swap(a[i], a[n-i-1]);
    }
    return a;

}

// or //

vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    
    return a;
}
