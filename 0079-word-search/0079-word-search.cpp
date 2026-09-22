class Solution {
public:
    bool valid(vector<vector<char>>&board,string word,vector<string>&path,int i,int j,int index){
          if(index==word.size()){
            return true;
          }
         
          if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]!=word[index])return false;
           char temp = board[i][j];
          board[i][j]='.';
          bool found = valid(board,word,path,i-1,j,index+1)||
                       valid(board,word,path,i+1,j,index+1)||
                       valid(board,word,path,i,j-1,index+1)||
                       valid(board,word,path,i,j+1,index+1);
           board[i][j]=temp;
          return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        //vector<vector<char>>res;
        vector<string>path;
        int m = board.size();
        int n = board[0].size();
        for(int i = 0;i < m; i++){
            for(int j = 0 ;j < n ;j++){
                if(board[i][j]==word[0]){
                    if(valid(board,word,path,i,j,0))return true;
                }
            }
        }
        return false;
    }
};