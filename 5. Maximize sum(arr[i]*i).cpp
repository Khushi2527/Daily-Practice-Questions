class Solution{
  public:
    int Maximize(int a[],int n)
    {
        int mod= 1e9+7;
        long long int product=0;
        sort(a, a+n);
        for(int i=0; i<n; i++){
           product+= (long long int)a[i]*i;
           product = product%mod;
        }
        
        return product;
    }
};
