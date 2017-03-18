/**
 * Implements a dictionary's functionality.
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "dictionary.h"
#include <ctype.h>
/**
 * Returns true if word is in dictionary else false.
 */
int dict_count = 0;
struct trie* root;
int check(const char *curword)
{
    // TODO
tries * currr = root;
int s = 0;
while(curword[s]!='\n' && curword[s]!='\0' && curword[s]!=' '){
  if(currr->subCs[toNum(curword[s])]==NULL) return 0;
  currr = currr->subCs[toNum(curword[s])];
  s++;
}
if(currr->isEnd == true) return 1;
return 0;
//    return 0;return 0 if isnt in dict. return 1 if is...
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
int load(const char *dictionary)
{
    // TODO
root = (struct trie *)malloc(sizeof(struct trie));
//root->subCs = NULL;
FILE *dict = fopen(dictionary, "r");
if(dict == NULL){
return 0;
}

char curword[LENGTH+2]= {"0"};//xtra 2 for \0 and \n in case
//char curLine[LENGTH+2]={"0"};
	while(fgets(curword, LENGTH, dict)!=0){
//SETS TO LOWER***
//if(root->subCs == NULL) printf("ITs NULL!");
for(int i = 0; curword[i]; i++){
  curword[i] = tolower(curword[i]);
}
//SETS TO LOWeR***
//add c lest it's \0 or \n

int s = 0;
tries *cur = root;
//printf("%s", curword);
while(curword[s]!='\n' && curword[s]!='\0' && curword[s]!=' '){


//checkerif(root->subCs[2] == NULL) printf("ITs NULL!");

/**TOCHECKif(cur->subCs[toNum(curword[s])]==NULL){
printf("NULL\n");
}
if(cur->subCs[toNum(curword[s])]==0){
printf("ZERO\n");
}(EITHER CHECK FOR 0 OR NULL WORKS) */
if(cur->subCs[toNum(curword[s])]==NULL){
  cur->subCs[toNum(curword[s])] = (struct trie *)malloc(sizeof(struct trie));
if(cur->subCs[toNum(curword[s])]==NULL) return 0;
}
  cur = cur->subCs[toNum(curword[s])];

s++;
}
//set isEnd to true.
cur->isEnd = true;
	dict_count++;
	}
fclose(dict);
//free(root);
    return 1;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
int toNum(char n){
if(n == '\'') return 26;
	return n-97;
}
unsigned int size(void)
{
    // TODO
    return dict_count;
//return 0;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
int unload(void)
{
//tries *current = root;
//for(

freetrie(root);
    // TODO
//free(root);
    return 1;
}

void freetrie(tries *curr){
	int i = 0;
for(i = 0; i < 27; i++){
	if(curr->subCs[i] != NULL)
		freetrie(curr->subCs[i]);

}
free(curr);
}
