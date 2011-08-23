#include <stdio.h>

int comp_vec(int *v1, int *v2, int n) {
	int i;
	
	for (i=0;i<n;i++) {
		if (v1[i]!=v2[i]) {
			return 0;
		}
	}
	return 1;
}


int main(void) {
	int v1[] = {1,2,3};
	int v2[] = {1,2,4};
	int n = 3;
	int i;
	
	printf("%d\n", comp_vec(v1,v2,n));
	
	return 0;
}