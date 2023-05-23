#include <stdio.h>
#include <stdlib.h>

void main() {
	int a, b;
		b = rand();
		do{
			printf ("Guess 1 - 100: ");
			scanf ("%d", &a);
			if (a<=100 && a>=0){
      		if (a < b)
      		printf ("Tang them\n");
      		else if (a > b)
      		printf ("Thap hon\n");
      		else   
      		printf ("True\n");}
      		else 
      		printf ("Khong hop le\n");
      	} while (a != b);
      	return;
}
