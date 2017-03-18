#include <stdio.h>
#include "dictionary.h"

int main(int argc, char *argv[]){
char *dict = "dictionaries/small";
load(dict);
unload();
int i = size();
printf("%d\n", i);
return 0;
}
