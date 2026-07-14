class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] > nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};