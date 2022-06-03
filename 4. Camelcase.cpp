// total words in string //
int camelcase(string s) {
    int count=1;
    for(int i=1; i<s.size(); i++){
        if(isupper(s[i])){
            count++;
        } 
    }
return count;
}
