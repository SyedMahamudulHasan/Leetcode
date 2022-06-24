class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = accumulate(nums.begin(), nums.end(), 0);
        int length = nums.size();

        for(int i=0; i<length; i++){
            if(leftsum == rightsum - nums[i])
                return i;

            leftsum += nums[i];
            rightsum -= nums[i];
        }

        return -1;
    }
};
