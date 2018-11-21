#include<conio.h>
#include<stdio.h>

main(){
	int a,res = 0,min,j=-1,i=-1;
	printf("VVedite posledovatelnost chisel : \n");
	while(scanf("%d",&a)){
		i++;
		if (a%3 == 0){
			min = a;
			j = i;
			break;	
		}
	}
	while(scanf("%d",&a)){
		i++;
		if (a%3==0 && a<min){
			min = a;
			j = i;
		}
	}
	if (i == -1) printf("No numbers");
	else if (j == -1) printf("No numbers %3 == 0");
	else printf("Index minimalnogo delyashegosya na 3 : %d",j);
	
}
