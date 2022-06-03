void bonAppetit(vector<int> bill, int k, int b) {
    int n=bill.size();
    int actAmount= (accumulate(bill.begin(), bill.end(), 0) - bill[k])/2;
    int finalAmount= b - actAmount ;
    if(finalAmount==0)
        cout<<"Bon Appetit";
    else {
        cout<< finalAmount;
    }
}
