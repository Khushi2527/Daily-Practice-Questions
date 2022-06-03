// 16,17,4,3,5,2--17,5,2 //
class Solution{
    
    public:
    vector<int> leaders(int a[], int n){
        vector<int>v;
        int leader=0;
        for(int i=n-1; i>=00; i--){
            if(a[i]>=leader){
                leader = a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(), v.end());
        return v;
        
    }
};
