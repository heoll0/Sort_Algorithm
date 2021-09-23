#include<vector>
#include<iostream>
using namespace std;

void selection_sort(vector<int> &nums, int n){
    int low;
    for(int i = 0; i < n - 1; ++i){
        low = i;
        for(int j = i + 1; j < n; ++j){
            if(nums[low] > nums[j]){
                low = j;
            }
        }
        swap(nums[i], nums[low]);
    }
}

int main(){
    vector<int> nums = {1,3,5,7,2,6,4,8};
    selection_sort(nums, nums.size());
    for(int i = 0; i < nums.size(); ++i){
        cout << nums[i] << endl;
    }

    return 0;
}