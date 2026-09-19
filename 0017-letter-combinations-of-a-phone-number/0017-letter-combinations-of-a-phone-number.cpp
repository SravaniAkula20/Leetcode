class Solution {
public:
    void solve(vector<string>&result,vector<string>&combos,string str,string digits,int index){
        if(index==digits.size()){
            result.push_back(str);
            return ;
        }
        int digit = digits[index]-'0';
        for(int i=0;i<combos[digit].size();i++){
            solve(result,combos,str+combos[digit][i],digits,index+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        vector<string>combos={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string str="";
        solve(result,combos,str,digits,0);
        return result;
    }
};