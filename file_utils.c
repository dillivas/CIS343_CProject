# include "file_utils.h"
/*********************************************************
 * @return size
 * @arg *filename and **buffer
 * ******************************************************/
int read_file(char* filename, char **buffer){
	//opens a file
	FILE *file = fopen(filename, "r");
	//checks to see if the file is null
	if (file == NULL){
	       	fprintf(stderr, "Read file does not exist\n");
		return -1;
	}
	//finds the size of the file
	struct stat st;
	stat(filename, &st);
	int size = st.st_size;
	//checks to see if the file is empty
	if(size < 1) fprintf(stderr, "File is empty\n");
	//creates memory location for buffer
	*buffer = (char*) malloc(size * sizeof(char));
	//reads the file into buffer
	fread(*buffer,size, 1, file);
	fclose(file);
	return size;
}
/****************************************************
 *@args *filename, *buffer, int size
 *@return 0
 ***************************************************/
int write_file(char* filename, char *buffer, int size){
	//creates a file
	FILE *fpout;
	fpout = fopen(filename, "w");
	//checks to see if file is null
	if(fpout == NULL){
		fprintf(stderr, "Write file does not exist\n");
		return -1;
	}
	//writes buffer into file
	fwrite(buffer, 1, size, fpout);
	fclose(fpout);
	return 0;
}


