#include<stdio.h>
#include<math.h> // dung de tinh toan 

// tao ham tinh so nguyen to
int isPrime(int n){
	if(n <= 0){
		return 0; // flase neu k phai so nguyen to
	}
	
	int cbh = (int)sqrt(n);
	int i;
	for(i = 0; i <= cbh; i++){
		if(n % 2 == 0){
			return 0;
		}
		
	}
	return 1;	
	}
	
int main(){
	int a, b;
	printf("moi ban nhap so a");
	scanf("%d", &a);
	printf("moi ban nhap so b");
	scanf("%d", &b);
	// kiem tra so thu nhat co phai so nguyen to hay khong 
	if(isPrime(a)){
		printf("day la so nguyen to %d", a);
	} else {
		printf("day khong phai so nguyen to %d", a);
	}
	//kiem tra so nguyen to thu hai
	if(isPrime(b)){
		printf("day la so nguyen to %d", b);
	} else {
		printf("day khong phai so nguyen to %d", b);
	}
	return 0;
}
