//
//  main.c
//  Binarytree
//
//  Created by Arsalan Vakili on 2015-06-09.
//  Copyright (c) 2015 Arsalan Vakili. All rights reserved.
//

#include <stdio.h>




int MidPoint (int min, int max);
int binarysearch( int array[], int targetvalue, int midPointindex, int maxpointindex );

int main(int argc, const char * argv[]) {
    
    int numbers[] = {2, 3 ,5 ,7 ,9 ,11 ,12, 14, 17};
    
   int key = binarysearch(numbers, 11, 0, 8);
    if( key == -1){
        printf("the target value is not in the list of array");
    }
    else {
        printf("the value of key is %d ",key);
    }
    
    return 0;
}


int binarysearch( int array[], int targetvalue, int midPointindex, int maxpointindex ){
        printf("size of array: %lu\n", sizeof(array));
    if (maxpointindex < midPointindex){
        return  -1;
    }
    
    else{
    
   int midpoint = MidPoint(midPointindex, maxpointindex);

    
    if (array[midpoint] < targetvalue){
        return binarysearch(array, targetvalue, midPointindex +1,maxpointindex);
    }
     if (array[midpoint] > targetvalue){
        return binarysearch(array, targetvalue, midPointindex -1, maxpointindex);
    }

        return  midpoint;
    
    }

}



int MidPoint (int min, int max){
    int value= (min + max)/2;
    return value;
}