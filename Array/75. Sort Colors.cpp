class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
       
        int k=0;
        while(k<=j){
            while(nums[j]==2 && j>i){
                j--;
            }
            if(nums[k]==0){
                if(k==i){
                    i++;
                    k++;
                }else if(nums[i]==0) i++;
                else {
                    swap(nums[i], nums[k]);
                    i++; 
                }
            }else if(nums[k]==2){
                if(nums[j]==2){
                    j--;
                }
                else{
                    swap(nums[j], nums[k]);
                    j--;
                }
               
            }else{
                k++;
            }
           // cout<<i<<":"<<j<<":"<<k<<endl;
        }
    }
};