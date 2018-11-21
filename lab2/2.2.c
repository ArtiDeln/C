//Восьмиричная

#include<conio.h>
#include<stdio.h>

int uniq(unsigned a, unsigned b){
	while(b >=1){
		if ((b&0x7) == a) return 0;
		else b = b>>3;
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
	int  j = 10;
	int a1,b1;
	printf("Type the first number : ");
	scanf("%lo",&a);
	printf("Type the second number : ");
	scanf("%lo",&b);
	
	while(a >=1){
		a1 = a & 0x7;
		a = a>>3;
		if (uniq(a1,b) == 1) {
			res = addToResult(res,a1,j);
			j *=10;
		}
	}
	printf("New number : %lo",res/10);
}
