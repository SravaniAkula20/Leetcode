class Solution {
public:
void backtrack(int startIdx, int k, int target, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0 && current.size() == k) {
            result.push_back(current);
            return;
        }
        if (target < 0 || current.size() > k) {
            return;
        }
        for (int i = startIdx; i <= 9; ++i) {
            current.push_back(i);
            backtrack(i + 1, k, target - i, current, result);
            current.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(1, k, n, current, result);
        return result;
    }
};