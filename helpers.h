//
//  helpers.h
//  essential-algos
//
//  Created by Edwin Mui on 6/1/20.
//  Copyright © 2020 Edwin Mui. All rights reserved.
//

#ifndef helpers_h
#define helpers_h

// swaps integers a and b
void swap(int &a, int  &b){
    int temp = a;
    a = b;
    b = temp
}

// swaps a and b if a > b
void comp_swap(int &a, int &b){
    if(a > b){
        swap(a, b)
    }
}

#endif /* helpers_h */
