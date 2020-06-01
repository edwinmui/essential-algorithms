//
//  driver.cpp
//  essential-algos
//
//  Created by Edwin Mui on 6/1/20.
//  Copyright © 2020 Edwin Mui. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "binary_search.h"
#include <iostream>

void print_vec(std::vector<int> vec);
void fill_vec(int arr[], int arr_size, std::vector<int> &vec);

TEST_CASE("Test Binary Search"){
    // Test Even Count
    int arr[6] = {0, 1, 2, 3, 4, 5};
    std::vector<int> vec;
    fill_vec(arr, 6, vec);
    int target = 3;
    int left = 0;
    int right = int(vec.size())-1;
    REQUIRE(binary_search(vec, target, left, right) == 3);
    
    // Test Odd Count
    int arr2[1] = {123};
    std::vector<int> vec2;
    fill_vec(arr2, 1, vec2);
    int target2 = 123;
    int left2 = 0;
    int right2 = int(vec2.size()) - 1;
    REQUIRE(binary_search(vec2, target2, left2, right2) == 0);
    
    // Test Not In Vec
    int arr3[2] = {4, 5};
    std::vector<int> vec3;
    fill_vec(arr3, 2, vec3);
    int target3 = 3924;
    int left3 = 0;
    int right3 = int(vec3.size()) - 1;
    REQUIRE(binary_search(vec3, target3, left3, right3) == -1);
}
    
// EFFECTS: Prints out every item in vec
void print_vec(std::vector<int> vec){
    for(int i = 0; i < vec.size(); ++i){
        std::cout << vec[i];
    }
}

// EFFECTS: Fills vec with every item from arr
void fill_vec(int arr[], int arr_size, std::vector<int> &vec){
    for(int i = 0; i < arr_size; ++i){
        vec.push_back(arr[i]);
    }
}
