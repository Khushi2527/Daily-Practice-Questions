void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int m= apples.size();
    int n= oranges.size();
    int countApples=0;
    int countOranges=0;
    
    for(int i=0; i<m; i++ ){          
        apples[i] = apples[i] + a;  
        if(apples[i]>=s && apples[i]<=t )
            countApples++;    
    }
       
    for(int j=0; j<n; j++ ){        
        oranges[j] = oranges[j] + b;
        if(oranges[j]>=s && oranges[j]<=t)
            countOranges++;
    }     
    cout<< countApples << endl;
    cout << countOranges <<endl;
}
