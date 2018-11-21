//Шестнадцатиричная

#include<conio.h>
#include<stdio.h>

int uniq(unsigned a, unsigned b){
	while(b >=1){
		if ((b&0xf) == a) return 0;
		else b = b>>4;
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
	scanf("%lx",&a);
	printf("Type the second number : ");
	scanf("%lx",&b);
	
	while(a >=1){
		a1 = a & 0x7;
		a = a>>4;
		if (uniq(a1,b) == 1) {
			res = addToResult(res,a1,j);
			j *=10;
		}
	}
	printf("New number : %lx",res/10);
}
