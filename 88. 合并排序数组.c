#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	m--;
	int k = m+n;
	n--;
	while ( n>=0 ) {
		if ( m>=0 && nums1[m] > nums2[n] )
			nums1[k--] = nums1[m--];
		else
			nums1[k--] = nums2[n--];
	}
}