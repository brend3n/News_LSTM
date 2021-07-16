#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>


struct Corpus{
    char** corpus_tokens;
    int num_tokens;
}typedef Corpus;



char** read_data(char* file_name){
    FILE *fp;
    char buff[255];

    assert(fp != NULL)
    fp = fopen(file_name, "r");
    while (fgets(buff, sizeof(buff), fp) != NULL) {
            // fprintf(stderr, "got line: %s\n", buff);
            /* Do something with `currentline` */
            printf("%s", buff);
    }

    fclose(file);



    return corpus
}

void main(){
    printf("Hello\n");
    return;
}