#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	 char *poo = "Supmyfriend";
	 char *	ric = "supmypigga";
	char *string = malloc(sizeof(char)*26);
	char eric[30] = "Sup my friend";
	strcpy(string, ric);
	printf("%s,%s, %c \n", poo, ric, poo[0]);
        int i = 0;
printf("\n%c, %c\n", string[0], string[1]);
        while(string[i]!='\0'){
                printf("%c", string[i]-32);
                string[i] = string[i] - 32;
                i++;

        }
        printf("\n");
ric = string;
printf("%s\n", ric);
free(string);
printf("------------------\nUsing arrays\n");
printf("%s\n", eric);
strcpy(eric, ric);
printf("%s\n", eric);
printf("\n\n%c,\n %c,\n %c,\n", poo[poo], poo[ric], poo[ric+poo+1]);



return 0;


}
