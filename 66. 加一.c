#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int enter=0;
	for ( int i=digitsSize-1; i>=0; i-- ) {
		enter = (digits[i]+enter)/10;
		if ( enter == 0 ) {
			digits[i]++;
			break;
		} else {
			digits[i] = 0;
		}
	}
	
	if ( enter ) {
		int *result = (int *)malloc((digitsSize+1)*sizeof(int));
		for ( int i=digitsSize-1; i>=0; i-- ) {
			result[i+1] = digits[i];
		}
		result[0] = enter;
		*returnSize = digitsSize+1;
		return result;
	} else {
		*returnSize = digitsSize;
		return digits;
	}
}