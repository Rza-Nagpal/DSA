class Solution {
public:
    void backtrack(int i, int target, vector<int>& candidates, vector<int>& subset, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(subset);
            return;
        }
        if(i == candidates.size() || target < 0) {
            return;
        }
        if(candidates[i] <= target) {
            subset.push_back(candidates[i]);
            backtrack(i, target - candidates[i], candidates, subset, ans);
            subset.pop_back();
        }
        backtrack(i + 1, target, candidates, subset, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> subset;
        backtrack(0, target, candidates, subset, ans);
        return ans;
    }
};