class Solution {
public:
bool isvalid(string str,int start,int end){
   // int start=0,end=str.size()-1;
    while(start<=end){
        if(str[start]!=str[end])return false;
        start++;
        end--;
    }
    return true;
}
void generate(string s,vector<vector<string>>&res,vector<string>&str,int idx){
    if(idx==s.size()){
        res.push_back(str);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(isvalid(s,idx,i)){
            str.push_back(s.substr(idx,i-idx+1));
            generate(s,res,str,i+1);
            str.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>str;
        generate(s,res,str,0);
        return res;
    }
};