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

// REQUIRES: nums is a valid, sorted vectors of ints, left and right refer to
//           the left-most and right-most indexes of nums, respectively
// EFFECTS:  If target is found in the vector nums, returns index of that
//           target; othewise returns -1
int binary_search(std::vector<int> nums, int target, int left, int right){
    // gets the midpoint index b/e left and right
    int mid = 1 + (right-1)/2;
    // base case; if target is found
    if(nums[mid] == target){
        return mid;
    }
    // base case; if target is not found
    if(left > right){
        return -1;
    }
    // edge case; if target is the first value of the vector
    if(nums[left] == target){
        return left;
    }
    
    // if middle is less than target
    if(nums[mid] < target){
        return binary_search(nums, target, mid+1, right);
    // if middle is larger than target
    }else{
        return binary_search(nums, target, left, mid);
    }
}

#endif /* binary_search_h */
