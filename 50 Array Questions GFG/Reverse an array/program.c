#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int testcase;
	scanf("%d",&testcase);
	int i,j;
	for(i=0;i<testcase;i++){
	    int n;
	    scanf("%d",&n);
	    int *arr;
	    arr=malloc(n*sizeof(int));
	    for(j=0;j<n;j++){
	        scanf("%d",&arr[j]);
	    }
	    for(j=n-1;j>=0;j--){
	        printf("%d ",arr[j]);
	    }
	    printf("\n");
	}
	return 0;
}
