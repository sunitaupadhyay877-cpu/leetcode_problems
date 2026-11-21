class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max1=height[left];
        int max2=height[right];
        int capacity=0;
        while(left<right){
            if(height[left] < height[right]){
                if(height[left] < max1){
                    capacity+= max1-height[left];
                }
                else{
                    max1=height[left];
                }
                left++;
            }
            else{
                if(height[right] < max2){
                    capacity +=max2 - height[right];
            }
            else{
                max2 = height[right];
            }
            right--;
        }

        }
        return capacity;
    }
};