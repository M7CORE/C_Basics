#include<stdlib.h>
#include<stdio.h>

int main(){
	int i;
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		printf("%d ", rand() % 100);
	}
	
	printf("size is %d", sizeof(int));
	
	return 0;
}
