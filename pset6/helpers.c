#include "helpers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN (128)

void assertion(/*char **/ void (*f)(char *string), char* value, char * expect, char *message){
	char dick[MAX_LEN];
	strcpy(dick, value);

	(*f)(dick);
	printf("%s, %s\n", dick, expect);
	if(strcmp(dick, expect)==0){
		printf("True: %s\n", message);
	}else{
		printf("Fail: %s\n", message);
	}
}

 void toUpper(char *string){
        int i = 0;
        while((string[i]!='\n' && string[i]!= '\0') && i<MAX_LEN){
                if(string[i]>=97 && string[i]<=122 ){
                        string[i] = string[i]-32  ;
                }
        i++;
        }
}

void toLower(char *string){
        int i = 0;

	//if(string == NULL) return ;
        while((string[i]!='\n' && string[i]!= '\0') && i<MAX_LEN){
                if(string[i]>=65 && string[i]<=90 ){
                        string[i] = string[i]+32  ;
                }
	i++;
	}
}

void allLetter(char *string){
	int i = 0;
	while(string[i]!= '\n' && string[i]!='\0' && i<MAX_LEN){
		if(!(65<=string[i] && string[i] <=90) && !(97<= string[i] && string[i] <= 122) ){
			removeChar(string, i);
		}
		else{i++;}//this was the subtle fix

	}
}

void removeChar(char *string, int Index){
	int i = 0;//was planning on doing this recursively but got lazy
	int p = 0;
	char *s = malloc(sizeof(char)*MAX_LEN);
	while(string[i]!='\0' && i < MAX_LEN){
		if(i==Index) i++;
		s[p] = string[i];
		i++;
		p++;
	}
	strcpy(string, s);
	free(s);
}

/*
//calling functions as parametrs... (*f)(int)
int main(int argc, char* argv[]){
	assertion(*toUpper, "son of a gun","SON OF A GUN" , "Should turn string to Upper");
	char *so = "son of a gun";
	toUpper(so);
	printf("%s\n", so);
	assertion(*toLower, "SON OF a GUN", "son of a gun", "Should turn string to lower");
	assertion(*allLetter, "Bitch. son of a gun", "Bitchsonofagun","Should turn string to only letters");

printf("\n Testing Actual\n");
char *hello = malloc(sizeof(char)*MAX_LEN);//diff btw pointer and aray.
strcpy(hello, "Hello my flux");
printf("%s\n", hello);
toUpper(hello);
printf("%s\n", hello);
allLetter(hello);
printf("%s\n", hello);
	free(hello);

	return 0;
}
*/
