class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> nums;
        int low = 0;
        int max_fruits = 0;

        for(int high = 0; high < fruits.size(); high++) {
            nums[fruits[high]]++;
            while(nums.size() > 2) {
                nums[fruits[low]]--;
                if(nums[fruits[low]] == 0) {
                    nums.erase(fruits[low]);
                }
                low++;
            }
            max_fruits = max(max_fruits, high - low + 1);
        }
        return max_fruits;
    }
};