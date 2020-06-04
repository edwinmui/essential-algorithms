//
//  insertion_sort.h
//  essential-algos
//
//  Created by Edwin Mui on 6/3/20.
//  Copyright © 2020 Edwin Mui. All rights reserved.
//

#ifndef insertion_sort_h
#define insertion_sort_h

#include "helpers.h"
#include <vector>

void insertion_sort(std::vector<int> &nums){
    // runs through vector
    for(int i = 1; i < nums.size(); ++i){
        int j = i;
        // checks the current val against each prev val in vector and swaps if needed
        while(j > 0){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
            }
            --j;
        }
    }
}

#endif /* insertion_sort_h */
