class Solution {
    public int[] runningSum(int[] nums) {
        int sum = 0;
        int length = nums.length;
        int newAry[] = new int[length];
        
        for(int i=0; i<length; i++){
            sum = 0;
           for(int j=0; j<=i; j++){
               sum += nums[j];
           }
            
            newAry[i] = sum;
        }
        return newAry;
    }
} 
