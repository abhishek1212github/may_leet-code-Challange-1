/*

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
         unordered_map<int,int> umap;   
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
            
        }
        int x;
        for(auto i=umap.begin();i!=umap.end();i++)
        {
            if( i->second > (nums.size()/2) )
            {
                x= i->first ;
                break;
            }
   
        }
        return x;
    }
};
