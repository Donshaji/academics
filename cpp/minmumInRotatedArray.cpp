class Solution {
public:
    int findMin(vector<int>& nums) {
        int f,l,i,n=nums.size();
        f=0,l=n-1;
        if(n<=1)
            return nums[0];
        while(l!=f){
            if((nums[(l+f)/2]>=nums[f]) && (nums[f]>nums[l])){
                f=((f+l)/2)+1;
            }
            else{
                l=(f+l)/2;
            }
        }
       return nums[l]; 
    }
};
