//
//  binary_search.h
//  essential-algos
//
//  Created by Edwin Mui on 6/1/20.
//  Copyright © 2020 Edwin Mui. All rights reserved.
//

#ifndef binary_search_h
#define binary_search_h

#include "helpers.h"
#include <vector>

// REQUIRES: nums is a valid vectors of ints, left and right refer to the left-
//           most and right-most indexes of nums, respectively
// EFFECTS:  If target is found in the vector nums, returns index of that
//           target; othewise returns -1
int binary_search(std::vector<int> nums, int target, int left, int right){
    // gets the midpoint index b/e left and right
    int mid = (left + right) / 2;
    // base case; if target is foun
    if(nums[mid] == target){
        return mid;
    }
    // if middle is less than target
    else if(nums[mid] < target){
        return binary_search(nums, target, mid, right);
    // if middle is larger than target
    }else{
        return binary_search(nums, target, left, mid);
    }
    // returns -1 if target is not found
    return -1;
}

#endif /* binary_search_h */
