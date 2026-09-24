class Solution {
public:
    bitset<30>c1,d1,d2;
    void generate(vector<vector<string>>&res,vector<string>&str,int row,int n){
        if(row==n){
            res.push_back(str);
            return;
        }
        for(int col=0;col<n;col++){
               if(!c1[col]&&!d1[row+col]&&!d2[row-col+n-1]){
                   str[row][col]='Q';
                   c1[col]=d1[row+col]=d2[row-col+n-1]=1;
                   generate(res,str,row+1,n);
                    c1[col]=d1[row+col]=d2[row-col+n-1]=0;
                    str[row][col]='.';
               }
        }
    }
    int totalNQueens(int n) {
         vector<vector<string>>res;
        vector<string>str(n,string(n,'.'));
        generate(res,str,0,n);
        return res.size();
    }
};