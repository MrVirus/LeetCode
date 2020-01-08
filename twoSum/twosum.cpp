//
// Created by seventh on 2019/4/2.
//
#include "twosum.h"
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> twosumSoluation::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> stroage;
    for (int i = 0; i < nums.size(); ++i) {
        if (stroage.count(target - nums[i])){
            return {i+1, stroage[target - nums[i]]+1};
        }
        stroage[nums[i]] = i;
    }
    return {};
}