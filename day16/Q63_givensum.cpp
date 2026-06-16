#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>&nums , int target){
    int n = nums.size();
    vector<int>arr;
    for (int  i = 0; i < n; i++)
    {
        for (int j = i +1; j <=n-1; j++)
        {
        if(nums[i] + nums[j] == target){
            arr.resize(2);
            arr[0]= nums[i];
            arr[1]= nums[j];
            return arr;
        }
        }
    }
    return arr; 
}

int main() {
        int n;
        int val;
        cout << "enter the number of elements" << endl;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << "enter the sum" << endl;
        cin >> val;
        vector<int> result = twosum(nums, val);
        if (result.size() == 2) {
            cout << result[0] << " " << result[1] << endl;
        } else {
            cout << "No pair" << endl;
        }

        return 0;
    }