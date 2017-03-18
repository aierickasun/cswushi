/**
 * Declares a dictionary's functionality.
 */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

// maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
#define LENGTH 45

/**
 * Returns true(1) if word is in dictionary else false.
 */
int check(const char *word);

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
int load(const char *dictionary);

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void);

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
typedef struct trie{
	struct trie* subCs[27]; //subCs = (struct trie *)malloc(
//sizeof(struct trie));
	bool isEnd;//should by defualt b set to false.
}tries;

void freetrie(tries *curr);


int unload(void);
/*
typedef struct head{
        struct trie children[27];//26 alphabets + apostrophe.
} headD;
*/


int toNum(char n);
//void recheck(tries *curr);

#endif // DICTIONARY_H
