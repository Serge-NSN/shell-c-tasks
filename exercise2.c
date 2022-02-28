#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//function to count the characters in text file

int count_characters(file_path[]){

	char file_path[]="";
	int ch=0;
	int fd;
	int fd=open("$file_path", O_RDONLY);
	
	if (fd<0){
		printf("Encountered error opening file\n");
		}
	else
	{
		while(ch = fgetc(fd) != EOF)
		{
			ch++;
		}
	close(fd);
	
	return ch;		
}

//function to copy the first 
void copy_text(main_file[]){ //The main_file here is the absolute path name of the text file
	char main_file[]="";
	char first_part[];
	int fd=open("$main_file", O_RDONLY);
	if (fd<0){
		printf("Error while opening text file\n");
		}
	else{
					
		
}
