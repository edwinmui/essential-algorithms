//
//  bubble_sort.h
//  essential-algos
//
//  Created by Edwin Mui on 6/2/20.
//  Copyright © 2020 Edwin Mui. All rights reserved.
//

#ifndef bubble_sort_h
#define bubble_sort_h

#include "helpers.h"
#include <vector>

// EFFECTS: Sorts the vector nums in ascending order
void bubble_sort(std::vector<int> &nums){
    for(int i = 0; i < nums.size(); ++i){
        for(int j = 0; j < nums.size() - 1; ++j){
            // swaps current index and index + 1 if index > index + 1
            comp_swap(nums[j], nums[j+1]);
        }
    }
}

#endif /* bubble_sort_h */
