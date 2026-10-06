class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int live = 0 ;
                for(int x=i-1;x<=1+i;x++){
                    for(int y= j-1;y<=1+j;y++){
                        if(x==i&&y==j)continue;
                        if((x>=0&&x<m) && (y>=0&&y<n)){
                            if(board[x][y]==1||board[x][y]==-1)live++;
                        }
                    }
                }
                if(board[i][j]==1){
                    if(live<2||live>3)board[i][j]=-1;
                }
                if(board[i][j]==0){
                    if(live==3)board[i][j]=2;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==-1)board[i][j]=0;
                if(board[i][j]==2)board[i][j]=1;
            }
        }
    }
};