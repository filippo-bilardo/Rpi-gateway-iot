//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include <unistd.h>       // read, write, close
#include <stdlib.h>       // exit
#include <stdio.h>        // printf
#include <signal.h>       // signal, costanti
#include <string.h>
#include "lib_file.h"

//------------------------------------------------------------------------------------------
//=== Global Functions =====================================================================
//------------------------------------------------------------------------------------------
void replaceAllString(char *buf, const char *old, const char *new) {
	
    int olen, nlen;
    char *s, *d, *tmpbuf;

    if (!buf || !*buf || !old || !*old || !new)
        return;

    tmpbuf = malloc(strlen(buf) + 1);
    if (tmpbuf == NULL)
        return;

    olen = strlen(old);
    nlen = strlen(new);

    s = buf;
    d = tmpbuf;

    while (*s) {
        if (strncmp(s, old, olen) == 0) {
            strcpy(d, new);
            s += olen;
            d += nlen;
        }
        else
            *d++ = *s++;
    }

    *d = '\0';

    strcpy(buf, tmpbuf);
    free(tmpbuf);
}
//------------------------------------------------------------------------------------------
void replaceAll(char *str, const char *oldWord, const char *newWord) {
// Replace all occurrences of a given word in string.
	
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int owlen = strlen(oldWord);

    /*
     * Repeat till all occurrences are replaced. 
     */
    while ((pos = strstr(str, oldWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word 
        strcat(str, newWord);
        
        // Concatenate str with remaining words after 
        // oldword found index.
        strcat(str, temp + index + owlen);
    }
}
//------------------------------------------------------------------------------------------
void replaceStringIfFindSubstring(char *oldString, const char *subString, const char *newString) {
// Sostituisce oldString con newString se all'interno di oldString trova subString
	
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int olen = strlen(subString);

    // Se all'interno di oldString trova subString
    if( strstr(oldString, subString) != NULL)
    {
        // copy newString in oldString
        strcpy(oldString, newString);
        strcat(oldString, "\n");
    }
}
//------------------------------------------------------------------------------------------
int main_test_replaceStringIfFindSubstring() {
//Ricerca e sostituzione di testo all'interno delle linee di un file
	
    /* File pointer to hold reference of input file */
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    char buffer[BUFFER_SIZE];
    char subString[100], newString[100];

    strcpy(path,"canvas-termometro.html");
    strcpy(subString,"var term_val=");
    strcpy(newString,"var term_val=26;");

    /*  Open all required files */
    fPtr  = fopen(path, "r");
    fTemp = fopen("replace.tmp", "w"); 

    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL || fTemp == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }

    /*
     * Read line from source file and write to destination 
     * file after replacing given word.
     */
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        // Replace all occurrence of word from current line
        replaceStringIfFindSubstring(buffer, subString, newString);

        // After replacing write it to temp file.
        fputs(buffer, fTemp);
    }

    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);

    /* Delete original source file */
    remove(path);

    /* Rename temp file as original file */
    rename("replace.tmp", path);

    printf("\nSuccessfully replaced all lines where find substring '%s' with '%s'.\n", subString, newString);
    return 0;
}
//------------------------------------------------------------------------------------------
char *fileToString(char *filename) {

    strcpy(filename,"canvas-termometro.html");
	char * buffer = 0;
	long fsize;
	FILE * f = fopen(filename, "rb");

	if(f)
	{
		fseek(f, 0, SEEK_END);
		fsize = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = malloc(fsize+1);
		if(buffer)
		{
			fread(buffer, fsize, 1, f);
		}
		fclose(f);
		buffer[fsize]=0;
	}

    return buffer;
}