// My Solution
// Use two pointers .. One(i) at start other(j) at end
// while(i <= j) --> keep incrementing i unless you find nums[i] == val and keep decremeting j until nums[j] != val
// swap... This will push all val elements to the end ...
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i  = 0 ; 
        int j = nums.size() - 1 ;
        
        while(i <= j)
        {
            if(nums[i] != val)
            {
                i++;
            }
            else if(nums[j] == val)
            {
                j--;
            }
            else if(nums[i] == val && nums[j] != val)
            {
                swap(nums[i] , nums[j]);
            }
        }
        return i ;
    }
};


// Editiorial ->
// 1.
public int removeElement(int[] nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.length; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

// 2.
public int removeElement(int[] nums, int val) {
    int i = 0;
    int n = nums.length;
    while (i < n) {
        if (nums[i] == val) {
            nums[i] = nums[n - 1];
            // reduce array size by one
            n--;
        } else {
            i++;
        }
    }
    return n;
}
