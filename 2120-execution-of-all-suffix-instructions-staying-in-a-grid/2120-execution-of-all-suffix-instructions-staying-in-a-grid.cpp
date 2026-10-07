class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m = s.length();
        vector<int>ans;
       
        for(int i=0;i<m;i++){
            int cnt=0;
             int r = startPos[0],c=startPos[1];
            for(int j =i;j<m;j++){
                 if(s[j]=='R')c++;
                 if(s[j]=='L')c--;
                 if(s[j]=='U')r--;
                 if(s[j]=='D')r++;
                 if(c==-1||c==n||r==-1||r==n){
                    break;
                 }
                 cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};