string timeConversion(string s) {
    int hh = stoi(s.substr(0,2));
    string ans;
    if(hh==12 && s[8]=='P')
        ans=  to_string(hh)+ s.substr(2,6);
    else if(s[8]=='P')
        ans= to_string(hh+12)+ s.substr(2,6);
    else if(hh==12 && s[8]=='A')
        ans= "00"+s.substr(2,6);
    
    else
        ans= s.substr(0,8);
    
return ans;
}
