class Solution {
public:
vector<int>solve(string expression){
     vector<int>result;
        for(int i = 0;i<expression.size();i++){
            char ch = expression[i];
            if(ch=='+'||ch=='-'||ch=='*'){
                string left = expression.substr(0,i);
                string right = expression.substr(i+1);
                vector<int>leftpart = solve(left);
                vector<int>rightpart = solve(right);
                for(int a :leftpart){
                    for(int b : rightpart){
                        if(ch=='+')result.push_back(a+b);
                        else if (ch=='-')result.push_back( a-b);
                        else result.push_back(a*b);
                    }
                }
            }
        }
        if(result.empty()){
            result.push_back(stoi(expression));
        }
        return result;
}
    vector<int> diffWaysToCompute(string expression) {
      return  solve(expression);
    }
};