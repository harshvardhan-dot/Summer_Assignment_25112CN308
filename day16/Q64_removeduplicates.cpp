#include <bits/stdc++.h>
using namespace std;
vector<int> removeduplicates(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    auto uniq = unique(nums.begin(),nums.end());
    nums.erase(uniq,nums.end());

    return nums;
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
    cout<<"the array with removed duplicates is : " << endl;
    vector<int> result = removeduplicates(nums);
    for ( int x : result)
    {
        cout<< x;
    }
    

    return 0;
}