class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long wSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        long long maxSum = wSum;

        for (int i = k; i < n; i++) {
            wSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, wSum);
        }

        return (double)maxSum / k;
    }
};
