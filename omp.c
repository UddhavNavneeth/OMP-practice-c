#include<stdio.h>
#include<omp.h>

int main() {
	int b[2][2] = {{-1,4},{2,3}};
	int c[2][2] = {{9,-3},{6,1}};
	int a[2][2];
	int i,j,k;

	#pragma omp parallel 
	{
		for (i=0; i<2; i=i+1){
	 		for (j=0; j<2; j=j+1){
	 		a[i][j]=0;
	 			for (k=0; k<2; k=k+1){
	 				a[i][j]=(a[i][j])+((b[i][k])*(c[k][j]));
	 			}
	 		}
	 	}
	}
		

	int p,q;
	for (p=0; p<2; p++) {
	        printf("\n");
	        for (q=0; q<2; q++) {
	        printf("%d \t", a[p][q]);
		}
	}

}
