class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right = numbers.size()-1;
        while(left<right){
        int sum = numbers[left] + numbers[right]; //right & left are indexes not values.
        if(sum==target) return {left+1,right+1}; // to balance array indexing
        else if(sum > target) right--;
        else left++;
        }
        return {};
    }
};
