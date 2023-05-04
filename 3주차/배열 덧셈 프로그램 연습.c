#include <stdio.h>

int main(void) {
    int A[3][3] = {{1,3,5},{6,7,8},{9,2,1}};
    int B[3][3] = {{1,3,8},{6,7,6},{9,2,2}};
    int total[3][3];
    int i, j;

    for(i = 0; i < 3; i++) {
    	printf("\n");
        for(j = 0; j < 3; j++) {
            total[i][j] = A[i][j] + B[i][j];
            printf("%d ",total[i][j]);
        }
    }
	
	

    return 0;
}

