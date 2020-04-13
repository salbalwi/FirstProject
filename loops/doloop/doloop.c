#include <stdio.h>



int main(){


	int i=0,j;

	do{

		j=i++;

		printf("This is the iteration number %d\n",j);

	} while (i<15);

	return 0;
}
