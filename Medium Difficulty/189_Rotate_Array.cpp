//code for leet code enviroment
class Solution {
    public:
        void rotate(vector<int>& nums, int k)
         {
            k=k%nums.size();
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());  
        }
    };




//code for local enviroment
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums,int k) 
{
    int n=nums.size();
    k%=n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin() + k);
    reverse(nums.begin()+k,nums.end());
}
int main() 
{
    int n,k;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++) 
    {
        cin>>nums[i];
    }
    cout<<"Enter the number of rotations : ";
    cin>>k;
    rotate(nums,k);
    cout<<"The rotated array is: ";
    for (int i=0;i<n;i++) 
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//Time Complexioty: O(n)
//Space Complexity: O(1)