/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
int search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
	for(int i = 0; i < n; i++){
		if(values[i] == value) return 1;
	}
    return -1;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    //[0, 5, 1]. [index starst at 0, increase after we search thru & find
//lowest>selection sort.
    int i;
	int k;
int lowest_num;
int lowest_index; 
    for(i = 0; i < n; i++){
	lowest_num = 2147483644;
	lowest_index = i;
	for(k = i; k < n; k++){
		if(values[k] < lowest_num){
			lowest_num = values[k];
			lowest_index = k;
		}
	}
	values[lowest_index] = values[i];
	values[i] = lowest_num;
    }
    return;
}
