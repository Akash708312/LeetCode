//Solution for leet code enviroment
class Solution {
    public:
        int search(vector<int>& nums, int target)
        {
            int lf=0,rt=nums.size()-1,mid;
            while(lf<=rt)
            {
                mid=lf+(rt-lf)/2;
                if(nums[mid]==target)
                {
                    return mid;
                }
                if(nums[lf]<=nums[mid])
                {
                    if(nums[lf]<=target && target<nums[mid])
                    {
                        rt=mid- 1;
                    }
                    else
                    {
                        lf=mid+1;
                    }
                }
                else
                {
                    if(nums[mid]<target && target<=nums[rt])
                    {
                        lf=mid+1;
                    }
                    else
                    {
                        rt=mid-1;
                    }
                }
    
            }
            return -1;   
        }
    };

//time complexity: O(logn)
//space complexity: O(1)





//Solution for local enviroment
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,target;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++) 
    {
        cin>>nums[i];
    }
    cout<<"Enter the target element: ";
    cin>>target;
    int lf=0,rt=nums.size()-1,mid;
    while (lf<=rt)
     {
        mid=lf+(rt-lf)/2;
        if(nums[mid]==target) 
        {
            cout<<"Target element is present at index"<< 7mid;
            return 0;
        }
        if(nums[lf]<=nums[mid])
        {
            if(nums[lf]<=target&&target<nums[mid])
            {
                rt=mid-1;
            } 
            else 
            {
                lf=mid+1;
            }
        } 
        else 
        {
            if(nums[mid]<target&&target<=nums[rt]) 
            {
                lf=mid+1;
            } 
            else 
            {
                rt=mid-1;
            }
        }
    }
    cout<<"The given elemnt is not present in the array";
    return 0;
}
