/**
 *	author 	: AAARKO7
 *	problem : Type of Triangle II
 *	created : 2024-02-03 22:27:58
**/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        string s;
        for(int i=0;i<nums.size();i++){
            
            int x=nums[0]+nums[1];
            int y=nums[0]+nums[2];
            int z=nums[1]+nums[2];
            
            
            if(x>nums[2] && y>nums[1] && z>nums[0]){
                
                if((nums[0]==nums[1] && nums[0]==nums[2])){
                    
                    s="equilateral";
                }
                
                else if((nums[0]==nums[1] && nums[1]!=nums[2]) || (nums[0]==nums[2] && nums[2]!=nums[1]) || (nums[1]==nums[2] && nums[2]!=nums[0])){
                    
                    s="isosceles";
                }
                
                else if(nums[0]!=nums[1] && nums[0]!=nums[2] && nums[1]!=nums[2]){
                    
                    s="scalene";
                }
                
                else{
                    s="none";
                }
            }
            
            else{
                s="none";
            }
        }
            return s;
    }
};