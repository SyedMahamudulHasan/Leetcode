class Solution {
  bool containsDuplicate(List<int> nums) {
      
      for(int i=0; i < nums.length-1; i++){
          for(int j=i+1; j<nums.length; j++){
              if(nums[i]== nums[j]){
                  return true;
              }
          }
      }
      return false;

  }
}


///solution 2
///Runtime: 484 ms, faster than 72.63% of Dart online submissions for Contains Duplicate.
///Memory Usage: 167.6 MB, less than 82.11% of Dart online submissions for Contains Duplicate.

class Solution {
  bool containsDuplicate(List<int> nums) {
      nums.sort();
      for(int i=0; i < nums.length-1; i++){
          if(nums[i] == nums[i+1]) 
              return true;
      }
      return false;

  }
}