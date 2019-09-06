#include <stdio.h>
#include <omp.h>

int main(){
int a1[]={10,21,3,41,12,23};
int a2[]={5,71,8,9,17,24};

int c[6];


omp_set_num_threads(6);
int i;
#pragma omp parallel
#pragma omp for
for(i=0; i<6; i++) {

        printf("Thread id: %d\n",omp_get_thread_num());

            c[i]=a1[i]+a2[i];

        printf("sum=%d",c[i]);
        printf("\n");

        }
for (i=0;i<6;i++) {
	printf("%d\t", c[i]);
}

}



