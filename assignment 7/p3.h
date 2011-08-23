// Austin Davis-Richardson
// harekrishna@gmail.com

#define DECIMALP '.' // Different people use different stuff for this.

float stof(char* s) {
	float output;
	char someString[100];
	int i,j;
		
	output = atoi(s); // this puts the integer part into 'output'
	
	for(i=0;s[i]!='.'&&s[i];i++);
	
	if (s[i]=='.') {
	
		for(i++,j=0;s[i]!='e' && s[i];someString[j++]=s[i++]);
		
		printf("%d",atoi(someString)/(10*(j)));
				
	}
	
	printf("someString: ");
	puts(someString);
	
	printf("'i' thus far: %d\n",i);
	
	return output;
	
}
