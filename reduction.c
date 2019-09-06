#include<stdio.h>
#include<omp.h>

int main() {
	int size = 5;
	double A[] = {1,12,32,29,11};
	double avg = 0.0;
	int i;
	#pragma omp parallel for reduction(+ : avg)
	for (i = 0; i < size; i++)
	{
	 avg += A[i];
	}
	avg = avg / size;
	printf("%f", avg);
}
