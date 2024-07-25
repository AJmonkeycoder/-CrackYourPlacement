//287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            ans^=nums[i];
            if(ans==nums[i-1] or ans==0){
                return nums[i];
            }
            nums[i]=ans;
        }
        return -1;
    }
};