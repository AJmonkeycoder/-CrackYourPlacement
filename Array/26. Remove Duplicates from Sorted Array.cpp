class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int size = nums.size();
       int max_num = 200;
       for(int i=0; i<nums.size()-1; i++){
        int j=i+1;
        while(j<size && nums[j]==nums[i]){
            nums[j]=max_num;
            j++;
        }
        i=j-1;
        
       } 
        sort(nums.begin(), nums.end());
       int count=0;
       for(int i=0; i<size; i++){
        if(nums[i]<max_num){
            count++;
        }else{
            break;
        }
       }
       return count;
    }
};