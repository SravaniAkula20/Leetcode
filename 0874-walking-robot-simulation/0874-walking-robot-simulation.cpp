class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int cnt=0;
        int dir =0;
        int X =0,Y=0;
        set<pair<int,int>>st;
          for(auto obstacle : obstacles) {
            st.insert({obstacle[0], obstacle[1]});
        }
        //0- north,1-east,2-south,3-west
        for(int command : commands){
            if(command== -1){
                 dir = (dir+1)%4;
            }
            else if(command ==-2){
                dir =(dir+3)%4;
            }
            else{
                int x=X,y=Y;
                for(int k=0;k<command;k++){
                 if(dir==0)y++;
                 else if(dir==1)x++;
                 else if(dir==2)y--;
                 else x--;
                if(st.find({x,y})!=st.end()){
                        break;
                     }
                     X=x;
                     Y=y;
                }
            }
            cnt= max(cnt,(X*X)+(Y*Y));
        }
        return cnt;
    }
};