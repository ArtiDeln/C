#include<conio.h>
#include<stdio.h>

main(){
	int p;
	int n,i,j, ind = -1;
	int m[100][100];
	int c[100];
	int ni[100];
	printf("Press n : ");
	scanf("%d",&n);
	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++){
			printf("Press a[%d][%d] = ",i,j);
			scanf("%d",&m[i][j]); 
			printf("00:%d\n",m[0][0]);
		}
	for (i = 0; i<n; i++) c[i] = 0;
	for (j = 0; j < n; j++)
		for (i = 0; i<n; i++){
			if (m[i][j] %2 == 0) c[j]++;
		}
	for (j = 0; j<n; j++){
		if (c[j] == 0){
			ind = j;
			break;
		}
	}
	if (ind == -1) {
		printf("No !2 columns\n");
		for (i = 0; i < n; i++)
			for (j = 0; j<n; j++){
				if (m[i][j] == 0) ni[i]++;
			}
		for (i = 0; i<n; i++){
			if (ni[i]>0){
				for (j = 0; j<n-1; j++){
					if (m[i][j]>m[i][j+1]){
						p = m[i][j];
						m[i][j] = m[i][j+1];
						m[i][j+1] = p;
					}
				}
			}
		continue;
	}
	}
	else printf("\nFirst column !2 : %d\n",ind);
	for (i = 0; i < n; i++){
		for (j = 0; j<n; j++)
			printf("%d",m[i][j]);
		printf("\n");
	}
		
}
