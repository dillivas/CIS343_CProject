/************************************************************
 *@author Sierra Dillivan
 Talked with Eric and Professor Woodring about pointers and how 
 to properly set up my methods.
 @version 9/15/2018
 @reads and writes to a file
 ************************************************************/
#ifndef FILE_UTILS_H
# define FILE_UTILS_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
//reads a file
int read_file(char* filename, char **buffer);
//writes a file
int write_file(char* filename, char *buffer, int size);

#endif
