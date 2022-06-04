class Solution{
public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int,int>freq;
        for(int i=0; i<n; i++){
            freq [a[i]]++;
            if(freq [a[i]]==k)
                return a[i];
        }
        return -1;

    }
};
