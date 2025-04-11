//leet code enviroment
class Solution 
{
    public:
        int minOperations(vector<int>& nums, int k) 
        {
            int n=nums.size();
            unordered_set<int>us;
            for(int i=0;i<n;i++)
            {
                if(nums[i]<k)
                {
                    return -1;
                }
                else if(nums[i]>k)
                {
                    us.insert(nums[i]);
                }
            }
            return us.size();
            
        }
};
//avg case time complexity 0(1)
//worst case time complexity 0(n)
//space complexity 0(u) u is the elements > k










//for local enviroment

// #include<bits/stdc++.h>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     int k,n;
    
//     unordered_set<int>us;
//     cout<<"Enter array size:"<<endl;
//     cin>>n;
//     cout<<"Enter k:";
//     cin>>k;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<k)
//         {
//             return -1;
//         }
//         else if(arr[i]>k)
//         {
//             us.insert(arr[i]);

//         }
//     }
//     cout<<endl<<us.size();
//     return 0;
// }
//avg case time complexity 0(1)
//worst case time complexity 0(n)
//space complexity 0(u) u is the elements > k
