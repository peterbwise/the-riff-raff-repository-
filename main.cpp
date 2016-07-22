//
//  main.cpp
//  LearnCpp Quiz 6.4.4
//
//  Created by Peter on 7/15/16.
//  Copyright © 2016 Stroud. All rights reserved.
//
//  BubbleSort modified for efficiency

#include <iostream>
#include <utility>

int main(int argc, const char * argv[]) {
    
    // initialize an array of 9 integers
    const int size(9);
    int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    
    // repeats the swapping to swap the whole array potentially 9 times
    for(int outerCount = 0; outerCount < size; outerCount++){
        
        // check to see if anything swapper
        bool swapped {false};
        
        // check to swap array elements 0 and 1, then 1 and 2, then 2 and 3, ... , then 7 and 8.
        for(int innerCount=1; innerCount < (size-outerCount); innerCount++){
            
            // if the previous value in the array is bigger than the next element, swap em.
            if(array[innerCount-1] > array[innerCount]){
                std::swap(array[innerCount-1], array[innerCount]);
                swapped=true;
            }
        }
        // if nothing swapped, give yourself a break and quit early, but report the number of iterations was the first you didn't sort anything.
        if(!swapped){
            std::cout << "The sorting finished early on iteration " << outerCount+1 << ".\n";
            break;
        }
    }
    // print the array to the console
    for(int index=0; index<size; index++){
        std::cout << array[index] << '\t';
    }
    std::cout << "\n";
    
    return 0;
}
