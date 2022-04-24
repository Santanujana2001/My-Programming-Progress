#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=1,f=1,ans=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                 t++;
            }
            else{
                if(t>f){
                 ans=nums[i];   
                 f=t;
                 t=1;   
                }
            }
        }
        return ans;
    }
};
int main(){
vector<int> a=;    
majorityElement(&a);
return 0;
}