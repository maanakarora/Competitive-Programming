#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        
        output[0] = 1;
        
        for(int i=1;i<n;i++){
            output[i] = nums[i-1]*output[i-1];
        }
        int right_product = 1;
        for(int i=n-2; i>=0; i--){
            output[i] *= right_product * nums[i+1];
            right_product *= nums[i+1];
        }
        
        return output;
        
        
}

int main(){

	return 0;
}