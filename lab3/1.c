#include<conio.h>
#include<stdio.h>

main(){
	int n;
	int mas[n], nm[n];
	int i,j=0,k;
	int max, mi=0;
	printf("Press n : ");
	scanf("%d",&n);
	for (i = 0; i<n; i++){
		printf("Press a[%d] = ",i);
		scanf("%d",&mas[i]);
	}
	i=0;
	if (mas[0]>=0){
		max=mas[0];
		while(mas[i]>=0 && i<n){
		if (mas[i]>max){
			max = mas[i];
			mi = i;
		}
		i++;
	}
	printf("First max before <0 (index) : %d\n",mi);
	} else printf("Zero element <0\n");
	///
	for (i = 0; i<n; i++){
		if (i%2 == 0){
			nm[j] = mas[i];
			j++;
		}
	}
	for (i = 0; i<n; i++){
		if (i%2 != 0){
			nm[j] = mas[i];
			j++;
		}
	}
	printf("New mas : \n");
	for (i = 0; i<n; i++)
		printf("a[%d] = %d\n",i,nm[i]);
}
