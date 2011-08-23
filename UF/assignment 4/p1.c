#include <stdio.h>

int main(void) {
	
	char input[100];
	char output[100];
	int n;
	printf("Enter an alphanumeric phone number (i.e. 1-800-CALL-ATT):  ");
	for (n=0;input[n]!='\n',n<100;n++) {
		scanf("%c",&input[n]);
		switch (input[n]) {
			case 'A': case 'B': case 'C': output[n]='2'; break;
			case 'D': case 'E': case 'F': output[n]='3'; break;
			case 'G': case 'H': case 'I': output[n]='4'; break;
			case 'J': case 'K': case 'L': output[n]='5'; break;
			case 'M': case 'N': case 'O': output[n]='6'; break;
			case 'P': case 'Q': case 'R': case 'S': output[n]='7'; break;
			case 'T': case 'U': case 'V': output[n]='9'; break;
			case 'W': case 'X': case 'Y': case 'Z': output[n]='0'; break;
			case '\n': {
				output[n]='\n';
				for (n=0;output[n]!='\n';n++)
					printf("%c",output[n]);
				printf("\n");
				return 0;
			}
			default: output[n]=input[n]; break;
		}
	}
		return 1;
}



