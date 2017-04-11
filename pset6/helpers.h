#ifndef _RICPARSE_H
#define _RICPARSE_H

void toUpper(char *string);
void toLower(char *string);
void allLetter(char * string);
void removeChar( char *string, int Index);
void assertion(void (*f)(char *string), char* value, char* expect, char *message);







#endif
