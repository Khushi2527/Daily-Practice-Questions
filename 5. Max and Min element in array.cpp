pair<long long, long long> getMinMax(long long a[], int n) {
    long long int maxNo= INT_MIN;
    long long int minNo= INT_MAX;
    
    for(int i=0; i<n; i++){
        if(a[i]>maxNo)
            maxNo= a[i];
        if(a[i]<minNo)
            minNo= a[i];
    }
    return {minNo, maxNo};
    
}

// or //

pair<long long, long long> getMinMax(long long a[], int n) {
    
    int minNo= *min_element(a, a+n);
    int maxNo= *max_element(a, a+n);
    return {minNo, maxNo};
    
}
