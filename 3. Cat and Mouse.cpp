string catAndMouse(int x, int y, int z) {
    string ans;
    int a= abs(x-z);
    int b= abs(y-z);
    
    if(a>b)
        ans = "Cat B";
    else if(a<b)
        ans = "Cat A";
    else 
        ans = "Mouse C";
    
    return ans;
}
