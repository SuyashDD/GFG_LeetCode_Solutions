// O(N2) solution using for loop won't work here
// Other possible approaches are using set (O(n)) or sorting array (O(nlogn))

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> map;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            map[nums[i]]++;
            
            if( 2 == map[nums[i]] )
                return true;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i = 1; i < nums.size(); i++)
//         {
//             if(nums[i-1] == nums[i])
//                 return true;
//         }
//         return false;
//     }
// };

// https://leetcode.com/problems/contains-duplicate/discuss/1153897/99-faster-or-4-Different-Approach-or-Easy-Understanding
