#include <stdio.h>
#include <stdlib.h> // For exit() function
#include <ctype.h>
int main()
{
    char c[1000] = {"0"};
    FILE *fptr;

    if ((fptr = fopen("program.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }
int i =0;
    // reads text until newline 
//printf("%c, %d\n", EOF, EOF);
while(fgets(c, 45, fptr)!=0){

    printf("Data from the file:\n%s||", c);
int i;
for(i = 0; c[i]; i++){
  c[i] = tolower(c[i]);
}
printf("Data from the file in Lower:\n%s", c);
i++;
}
    fclose(fptr);
   printf("%d\n", i); 
    return 0;
}
