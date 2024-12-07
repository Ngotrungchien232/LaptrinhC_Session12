#include<stdio.h>
#include<math.h>

int number(int arr[], int n){
	int i;
	
	for(i = 0; i < n; i++){
	    printf("number[%d] = %d\n", i, arr[i]);	
	    
	}
	return 0;
}



int main(){
	int n;
    printf("moi ban nhap kich thuoc cho mang");
    scanf("%d", &n);
    int arr[n];
    int i;
    
    for(i = 0; i < n; i++){
    	printf("number[%d] = \n", i);
    	scanf("%d", &arr[i]);
	}
	number(arr, n);
	
    return 0;
}
