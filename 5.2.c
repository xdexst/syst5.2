#define SIZE_ARRAY 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int sum=0;
	double v[SIZE_ARRAY]={};
	srand(time(NULL));
	int plus;
	int x;
	double t;
	const int LOW_RANGE = -100;
	const int HI_RANGE = 100;
	printf("RAND_MAX:%d\n, RAND_MAX");
	printf("time: %d\n, Time",time(NULL));
	printf("All elements of array \n");
	for (int i=0; i<SIZE_ARRAY; i++){
		
//printf("v[%d] = %d\n", i, v[i]);
	t = (HI_RANGE -LOW_RANGE) * (float)rand()/RAND_MAX + LOW_RANGE;
	v[i] =t;
	//printf("t = %lf\n", t);
	printf("v[%d] = %5.2lf\n",i, v[i]);
	//x=rand()% (HI_RANGE -LOW_RANGE+1) + LOW_RANGE;
	//printf("x= %d\n",x);
	}

for(int i = 0; i <SIZE_ARRAY; i++){
 sum = sum + v[i];
printf("Sum: %d\n", sum);
}
	return 0;
}

