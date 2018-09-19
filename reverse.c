# include "file_utils.h"
/******************************************************
 * @args argc, *argv[]
 * reverses a file
 * ***************************************************/
int main(int argc, char *argv[]){
	//checks fro proper amount of inputs
	if (argc !=3){
		fprintf(stderr, "Incorrect number of files\n");
		return -1;
	}
	int count = 0;
	char *buffer;
	char *pointer;
	//calls the read file and stores size
	int sz = read_file(argv[1], &buffer);
	//creates a pointer to another memory location
	char *flipped = (char*) malloc(sz *sizeof(char));
	//reverses the code from buffer into flipped
	for (int j = sz; j >= 0; j--){
		flipped[count] = buffer[j];
		count++;
	}
	//calls write file
	int complete = write_file(argv[2], flipped, sz);
}
