class Solution {
public:
int SquareSum(int n) {
    int totalSum = 0;
    while(n > 0) {
        int digit = n % 10;
        totalSum += digit * digit;
        n = n/10;
    }
    return totalSum;
}
    bool isHappy(int n) {
        int slow = n;
        int fast = SquareSum(n);
        while(slow != fast) {
            slow = SquareSum(slow);
            fast = SquareSum(SquareSum(fast));
        }
        return slow==1;
    }
};