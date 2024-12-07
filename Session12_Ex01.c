#include<stdio.h>
#include<math.h>

int sum(int a, int b){
	int sum = a + b;
	return sum;
}




int main(){
	int a, b;
	printf("Moi ban nhap so a");
	scanf("%d", &a);
	printf("Moi ban nhap so b");
	scanf("%d", &b);
	int tong = sum(a, b);
	printf("tong cua %d va %d la %d", a, b, tong);
	return 0;
	
}
