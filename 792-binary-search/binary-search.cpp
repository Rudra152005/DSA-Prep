class Solution {
public:
    int searchfun(vector<int>& nums, int left, int right, int target) {
        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            return searchfun(nums, mid + 1, right, target);

        return searchfun(nums, left, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        return searchfun(nums, 0, nums.size() - 1, target);
    }
};