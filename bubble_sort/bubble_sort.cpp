#include<vector>
#include<iostream>
using namespace std;

void bubble_sort(vector<int> &nums, int n){
    bool swapped;
    for(int i = 0; i < n; ++i){
        swapped = false;
        for(int j = 1; j < n - i; ++j){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> nums = {1,3,5,7,2,6,4,8};
    vector<int> temp(nums.size());
    bubble_sort(nums, nums.size());
    for(int i = 0; i < nums.size(); ++i){
        cout << nums[i] << endl;
    }

    return 0;
}