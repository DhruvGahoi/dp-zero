class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int maxCount = 0;
        unordered_map<int, int> freq;

        while(j < n){
            freq[nums[j]]++;

            while(freq[nums[j]] > k) {
                freq[nums[i]]--;
                i++;
            }

            maxCount = max(maxCount, j - i + 1);
            j++;
        }
        return maxCount;
    }
};