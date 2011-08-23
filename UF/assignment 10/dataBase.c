// Austin Davis-Richardson
// harekrishna@gmail.com

/*
											 ,?ZZOOZ$7:. .                                          
										   ?ZO8DDDDDDD88O$?,                                         
									 	 7ZO8DDD88O8O88D88Z7?.                                       
									   .~$ZZZOOO8ZZZ7$$ZZZZ$?==:                                      
									 .?I+:~:::~:,:=~+:::~~~=+=I~:                                    
								    .??:,,,,.,............,.,.,==:.                                  
			 		     			+=:,:,,.,.,.............,,,,~=.                                  
         ..,,,                     ?+=,,,,,,,,.,...........,,:,,,?=.                   ...           
		 .,.,:                   .~++~:,,,,..,.,........,..,,,,,:=I:                   ,:,.          
         .,,~:.                   +?+~:,,,,.,......,,,.,...,,,::~+I+                  ,:::,.         
         :,:~:.                   +?=~~7IZZ$~:..,....,....,,.,:::+7I                  ,:::.          
       ,,:~:: .                 .+7:+DDODD88O=,,,,,,,,:=O8OO$7:~+$7                  .::~,,         
       .~,,~~=                   .I?~$7+?+I7I8OZ?:.,:?7O8DDN8DNDI~$O                   ~~::,,        
      .,,,:~+                    .II7Z7I?7I7I$7II=~=?$$$ZO$ZO:IOZ~I$                   .~~:...       
     .,:~:~.                    ,Z8+=?$O?,,,.,II?~++I,.,,,,Z77+~8D$                   .:~,:.,.      
     ..,,~~=.                   :+Z=~=+?7$,....,O+:=I+,....:IZ7+:?$8                     :,,.,.      
   .,,..:~~  . ....            .?$OI~:~?++:,,:::O,.,8~::,,,:~==:~=?Z~.                  .,~,,...     
  .,.,.,,...,......,..         ,=DZ?::,:~~~~:::Z=:,,=7:,:~~=,:=?++=ZI~              ..   .,,,,...    
 .,,,..,..,......,,,,,....     ,=DDI?~::~~:::~$:=:~~~?~~::,::~+=I=$$7~         .,.... .......,.,..   
 :,,.,,........,..:~~,,,.,..    =DDOI7=?=+===++=::,,~=~+I$I$$+I7I~8Z= .     ...,..................,  
 ,:,.:...,,,.......:+=:,,,,,.   =DNDZ$+=?~=~?$~~=~:,==~I+=:=~?$$OZNZ+     .,..::,,,......,...,.,,.,,.
 ,,.,,.,,,,....,..,,,?=~,,,,.  .:NNN88Z$+?I7?$$$$:::?ZI7?I?==?7$DDND.   .,,.,,:=:,.....,.,.......,.,,
 ,,,:.,.,.,.....,,,~:~.,~+~~:...=NMMNN888DDDNNND$Z+$O8D8D8DD$$$8DNN8   .,,,,,~~=:.......,.,...,.,,,.:
 ,,,..,,,,,,,...,,::~~::,:,  ...$NMMMNDDNNNNNMNNDDO8D8NNDDNNNO8DNNDI.  .,:,~,,:,~:..........,.,,..,.,
 ..,.,,,,,,,,...,,,~I~::~:+. ...?NMMMMNNMMNNMMNNNNNDDNNMNNNNMN8MMMNZ     ~::,,:~~:,,........,,.,.,,,,
 ,,,,,,,,,,,,,.....::I=~~==.   .,NMMMMMMMMDMNOOII~I~77Z8MNDNMNNMMNN7.    ~,,:,:~~:,...,,.,..,,..,.,,,
 ,,.,,,,,,,,......,,=~:??=~    .,NMMMMMMMMDZZOD77Z+:?Z$Z$I8NMNMMMND.    ,~~~:,~~~,:....,.,..,,....,,,
 ,,,,,,,,,,,......,~~~~~:..     ,OMMMMMMMMN8Z7+=~:,::~~~+?ONMMMMNN7      ~::~+=~~,.........,,,,,,,,,,
 ,,,:,,,,,,,,,,,,.,=?+~~~=   ..  .DMMMMMMMMD88O8OOO8$Z77$$NNMMMMN7.      .+~::~=:,.........,..,,,,,.,
 ,:,,,,,,,,,,,,,..,~7++=7~      ..~NMMMMMMMMNN88D8DDDD8O8DNMMMMMN:        :=:::~=,....,,,,,.,,,,,,,,,
 ,:,,,,,.,.......,:~+$?+.  .  ... ..MMMMMMMMMM88DZO8$8ODNNMMMMMN~        .~=~::~+,.,,,,,,,,..,.,,,,,,
 ~:::,:,,,,,..,..,:+=~?     .... ...+8MMMMMMMMNNDDO7Z8DNMMMMMMNI         .~~~:~?~:...,.........,,,.,,
 ~:~~,:,,,,,,.,,:~+I?7~   . ........,~ZMMMMMMMMMNNNDDNMMMMMMMN=...          ,~++=:,....,.,,,,..,,,,,:
 ~~:~~==:+~~?=+++?II7 .   ..........,~7ONMMMMMMMMMMMMMMMMMMMO~....           ,==+=~::,,,::,,::,,,,:::
 =+?+=~+~=+~=:~~.................,,,:=$O88DMMMMMMMMMMMMMMMNO..                ??=?~~:~~~~:::~,::::~~:
 +??+?+++,......   .....,,,,,.,,:~:=+$7OO88D8NNNMMMMMNDD88Z$=.. ..             .:=~+=,,:~~~~,=~=~?+~+
 .... .,::~:~~:~=+,~::::~~+I?I??Z77$I$ZZZZOD8OOODZZ$ZOOOZI=...                      .      .... . .
 ::=:+~?=~I+=+++=I7I+?II$ZZ$8Z$7$I$OO7OZZ$ZZOOZO8NNN8Z88Z7+=:~Z,                                    
 =+==?+???=I$I?IZ+Z$III777OO88OOZ77ZIOOZOO88DO7ZZOOZZ8OD88I=?+=+=,. .....     ...  .   ~   .   . .   
 ?+7?77?I?I$777$+7I7?+?OZIO$Z8OZO$7$7I$$OOZZ$Z888$Z$O$Z7$?+++?++~~:=+=+~=??=::+:+++~==?+=====,:,. . */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dataBase.h"

// PRELIMINARY VARIABLE MAKING

typedef struct node
{
	char firstName[50];
	char lastName[50];
	int salary;
	int account;
	char division[50];
	struct node *next;
} myNode, newNode;

static myNode *nodeIterator, *endP = NULL, *np = NULL, *begin = NULL, *tmp = NULL;

// FUNCTIONS DEFINED IN HOMEWORK

void loadFile (const char *fileName) {
	
	int i,j;
	char myString[250], newString[50];

	FILE *fp = fopen (fileName,"r");
	
	if (!fp) {
		printf ("ERROR: Unable to open file %s\n\n",fileName);
		exit (1);
	}
	
	
	while (1) {
		if (feof(fp)) { break; }

		fgets(myString,250,fp);

		myNode *np = malloc(sizeof(myNode));
		
		if (begin == NULL) {
			begin = np;
			
		} 
		else {
			endP->next = np;
		}
		
		endP = np;
		
		{
		for (j=0,i=0;myString[i]!=0;i++) {
			if (myString[i] == 34) { continue; }
			if (myString[i] == '|') { newString[j] = 0; break; }
			newString[j++] = myString[i];
		} 
		strcpy (np->firstName,newString);
		
		for (i++,j=0;myString[i]!=0;i++) {
			if (myString[i] == 34) { continue; }
			if (myString[i] == '|') { newString[j] = 0; break; }
			newString[j++] = myString[i];
		}
		strcpy (np->lastName,newString);

		for (i++,j=0;myString[i]!=0;i++) {
			if (myString[i] == 34) { continue; }
			if (myString[i] == '|') { newString[j] = 0; break; }
			newString[j++] = myString[i];
		}
		np->salary = atoi (newString);
		
		for (i++,j=0;myString[i]!=0;i++) {
			if (myString[i] == 34) { continue; }
			if (myString[i] == '|') { newString[j] = 0; break; }
			newString[j++] = myString[i];
		}
		np->account = atoi (newString);

		for (i++,j=0;myString[i]!=0;i++) {
			if (myString[i] == 34) { continue; }
			if ((myString[i] == '|') || (myString[i] == '\n')) { newString[j] = 0; break; }
			newString[j++] = myString[i];
		}
			
		strcpy (np->division,newString);
			
		}
		
	}
		
}

void insertRecord(const char *fn, const char *ln, int salary, int accounts, const char *division) {

	myNode *np = malloc(sizeof(myNode));
	
	if (begin == NULL) {
		begin = np;
		
	} else {
		endP->next = np;
	}
	
	endP = np;
	
	strcpy (np->firstName,fn);
	strcpy (np->lastName,ln);
	np->salary = salary;
	np->account = accounts;
	strcpy (np->division,division);

}

void saveFile(const char *fileName) {
	
	FILE *fpw;
	if (fileName != NULL) {
	
		fpw = fopen (fileName,"w");

	} 
	
	else { fpw = stdout; }
	
	
	if (!fpw) {
		printf ("ERROR: Unable to open file %s for writing!\n\n",fileName);
		exit (1);
	}
	
	if (begin == NULL) {
		printf ("ERROR: you must first loadfile(\"...\");!\n\n");
		exit (1);
	}


	nodeIterator = begin;
	while(nodeIterator != NULL) {
		
		putc(34, fpw);
		fputs (nodeIterator->firstName, fpw);
		fputs ("\"|\"", fpw);
		fputs (nodeIterator->lastName, fpw);
		fprintf (fpw, "\"|%d|%d|\"", nodeIterator->salary, nodeIterator->account);
		fputs (nodeIterator->division, fpw);
		fputs ("\"\n", fpw);		
		
		nodeIterator = nodeIterator->next;
		
	}
	fclose(fpw);
}

void findRecord(int field, const char *data) {
	nodeIterator = begin;

	printf("Searching field %d for %s:\n",field,data);
	
	if (begin == NULL) {
		printf ("ERROR: you must first loadfile(\"...\");!\n\n");
		exit (1);
	}
	
	while (nodeIterator != NULL) {
		switch (field) {
			case 1: { 
				if (!strcmp(data,nodeIterator->firstName))
					printRecord(nodeIterator);
				break;
			}

			case 2: {
				if (!strcmp(data,nodeIterator->lastName))
					printRecord(nodeIterator);
				break;
			}

			case 3: {
				if (atoi(data) == nodeIterator->salary)
					printRecord(nodeIterator);
				break;
			}
			
			case 4: {
				if (atoi(data) == nodeIterator->account)
					printRecord(nodeIterator);
				break;
			}
			
			case 5: {
				if (!strcmp(data,nodeIterator->division))
					printRecord(nodeIterator);
				break;
			}
			default: printf("ERROR: Your field sucks!\n\n"); break;
		}
		
		nodeIterator = nodeIterator->next;
	}
}

void removeRecord(int field, const char *data) {
	
	nodeIterator = begin;
	tmp = NULL;

	while (nodeIterator != NULL) {
		switch (field) {
			case 1: { 
				if (!strcmp(data,nodeIterator->firstName)) removeCurrent();
				else tmp = nodeIterator;
				break;
			}
			case 2: {
				if (!strcmp(data,nodeIterator->lastName)) removeCurrent();
				else  tmp = nodeIterator;
				break;
			}
			case 3: {
				if (atoi(data) == nodeIterator->salary) removeCurrent();
				else tmp = nodeIterator;
				break;
			}
			case 4: {
				if (atoi(data) == nodeIterator->account) removeCurrent();
				else tmp = nodeIterator;
				break;
			}
			case 5: {
				if (!strcmp(data,nodeIterator->division)) removeCurrent();
				else tmp = nodeIterator;
				break;
			}
			default: printf("ERROR: Your field sucks!\n\n"); break;
		}
		
		nodeIterator = nodeIterator->next;
		
	}
}

void sortDataBase(int field) {
	int i;
	nodeIterator = begin;
	while (nodeIterator->next != NULL) {

		switch (field) {
			case 1:
				for (i=0;((nodeIterator)->firstName[i] != '\0') && ((nodeIterator->next)->firstName[i]!='\0');i++) {
					if (tolower(nodeIterator->firstName[i]) > tolower((nodeIterator->next)->firstName[i])) {
						swapRecords(nodeIterator,nodeIterator->next);
						sortDataBase(field);
						break;
					}
					else break;
					
					} break;
			case 2:	
				for (i=0;((nodeIterator)->lastName[i] != '\0') && ((nodeIterator->next)->lastName[i]!='\0');i++) {
				if (tolower(nodeIterator->lastName[i]) > tolower((nodeIterator->next)->division[i])) {
					swapRecords(nodeIterator,nodeIterator->next);
					sortDataBase(field);
					break;
				}
				else break;
				
			} break;
			case 3:
				if ((nodeIterator->next)->salary < nodeIterator->salary) {
					swapRecords(nodeIterator,nodeIterator->next);
					sortDataBase(field);
				} break;
			case 4:
				if ((nodeIterator->next)->account < nodeIterator->account) {
					swapRecords(nodeIterator,nodeIterator->next);
					sortDataBase(field);
				} break;
			case 5: 
				for (i=0;((nodeIterator)->division[i] != '\0') && ((nodeIterator->next)->division[i]!='\0');i++) {
					if (tolower(nodeIterator->division[i]) > tolower((nodeIterator->next)->division[i])) {
						swapRecords(nodeIterator,nodeIterator->next);
						sortDataBase(field);
						break;
					}
					else break;
					
				} break;
			default: break;
		}
		
		if (nodeIterator->next != NULL) { nodeIterator = nodeIterator->next; }
		
	}
	
}


// HELPER FUNCTIONS

static void swapRecords(myNode *a, myNode *b) {

	myNode *hold = malloc(sizeof(myNode));
	
	strcpy(hold->firstName,a->firstName);
	strcpy(hold->lastName,a->lastName);		
	hold->salary = a->salary;
	hold->account = a->account;
	strcpy(hold->division,a->division);
	
	strcpy(a->firstName,b->firstName);
	strcpy(a->lastName,b->lastName);		
	a->salary = b->salary;
	a->account = b->account;
	strcpy(a->division,b->division);
	
	strcpy(b->firstName,hold->firstName);
	strcpy(b->lastName,hold->lastName);		
	b->salary = hold->salary;
	b->account = hold->account;
	strcpy(b->division,hold->division);
	
	free(hold);
	
}

static void printRecord(myNode *printNode) {
	
	putc(34, stdout);
	fputs (printNode->firstName, stdout);
	fputs ("\"|\"", stdout);
	fputs (printNode->lastName, stdout);
	fprintf (stdout, "\"|%d|%d|\"", printNode->salary, printNode->account);
	fputs (printNode->division, stdout);
	fputs ("\"\n", stdout);
	
}

static void removeCurrent() {
	if (tmp != NULL) {	
		tmp->next=nodeIterator->next;
		
	} else { begin = begin->next; }
	
	free(nodeIterator);
}