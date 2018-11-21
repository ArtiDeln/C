//Десятиричная

#include<conio.h>
#include<stdio.h>

int uniq(unsigned a, unsigned b){
	while(b >=1){
		if (b%10 == a) return 0;
		else b/=10;
	}
	return 1;
}

unsigned addToResult(unsigned res, unsigned a, int j){
	a*=j;
	a+=res;
	return a;
}

main(){
	unsigned a,b,res=0;
	int i = 10, j = 10;
	int a1,b1;
	printf("Type the first number : ");
	scanf("%lu",&a);
	printf("Type the second number : ");
	scanf("%lu",&b);
	
	while(a >=1){
		a1 = a%i;
		a/=10;
		if (uniq(a1,b) == 1) {
			res = addToResult(res,a1,j);
			j*=10;
		}
	}
	printf("New number : %lu",res/10);
}
