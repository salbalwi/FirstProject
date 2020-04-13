# include <stdio.h>



int main(){



	int i=0,j;

	while (j<15){

		j=i++;

	if (j<3){
		
	
		printf("this %d number less than 3\n",j);

	}

	else if (j<6){
		
		
		printf("this %d number less than 6\n",j);

	}

	else{
		printf("this %d number bigger than 6 and 3\n",j);

	}
	}

	return 0;

}



