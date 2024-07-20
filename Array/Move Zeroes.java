class Solution {
    public void moveZeroes(int[] nums) {
        int size = nums.length;
        int i=0, j = size-1;
        while(i<=j){
            if(nums[i]==0){
                for(int k=i; k<j; k++){
                    nums[k] = nums[k+1];
                }
                nums[j]=0;
                j--;
               
            }else{
                i++;
            }
        }
    }
}