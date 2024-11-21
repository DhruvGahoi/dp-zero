------------------------Leetcode #209--------------------------
//Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX;
        int i = 0;
        int j = 0;
        int sum = 0;
        while(j < n) {
            sum += nums[j];
            while(sum >= target) {
                minLength = min(minLength, j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        } 
        return minLength == INT_MAX ? 0 : minLength;
    }
};