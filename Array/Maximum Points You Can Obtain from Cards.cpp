class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {  
        int n =cardPoints.size();  // calculated the size of array

        //taking window of size n-k;
        int i=0; //left pointer of window
        int j=cardPoints.size()-k-1; //right pointer of window
        
        int total_points=0; 
        int win_sum=0;

        //calculating total sum of all points and sun of points fall in window
        for(int ind=0; ind<n; ind++){
            total_points+=cardPoints[ind]; //total sum
            if(ind<=j){
                win_sum+=cardPoints[ind]; //window sum
            }
        }
        int sum=0;
        sum=max(sum, total_points-win_sum); //declaring max sum;
        
        while(j<cardPoints.size()-1){

            win_sum+=cardPoints[j+1] -cardPoints[i] ; //updating window sum

            sum=max(sum, total_points-win_sum);
            
            j++;
            i++;
        }
        
        return sum;
        
    }
};