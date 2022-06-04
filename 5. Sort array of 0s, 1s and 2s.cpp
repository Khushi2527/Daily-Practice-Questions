class Solution{
  public:
    void sort012(int a[], int n)
    {
        int ct0= count(a, a+n, 0);
        int ct1= count(a, a+n, 1);
        
        for (int i=0; i<ct0; i++){
            a[i] = 0;
        }
        for (int i=ct0; i<ct0+ct1; i++){
            a[i] = 1;
        }
        for (int i=ct0+ct1; i<n; i++){
            a[i] = 2;
        }
    }
    
};
