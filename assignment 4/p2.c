/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	char input[100];
	float old,new;
	int n;
	printf("Enter an expression (i.e. 1+2.5*3): ");
	for (n=0;;n++) {
		scanf("%c",&input[n]);
		if (input[n]=='\n') break; 
	} 
	input[n+1] = '\n';
	for (n=0;input[n]!='\n';n++) {
		
		switch (input[n-1]) {
			case '+': new=old+input[n]; break;
			case '-': new=old-input[n]; break;
			case '*': new=old*input[n]; break;
			case '/': new=old/input[n]; break;
			default: new=old; break;
			case '\n': printf("= %g \n",new); return 0;
			}
		old = new;
		}

	return 0;
	
}


