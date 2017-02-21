/*
A file of useful functions that will be used when programming, especially with the terminal
Author: Chris Guarini
*/
#include "Functions.h"
#include "stm32f7xx_hal.h"

void nextLine(void){
	printf("\n\r");
}



/*
Gets a string from the terminal and stores it in the param String[].
Will loop until it hits a carriage return, or until the buffer runs out
@param: String[] - Where to store the string from the terminal
				buffer - 	 Max length of the string
*/
int getString(char String[],int buffer){
	char ch;//for use by getchar()
	for(int i=0;i<buffer;i++){//Loop through the characters in the terminal until the buffer runs out
		ch=getchar();//get a character from the terminal
		if(ch==0xD){//check for carriage return
			String[i]=0x00;//Null terminate string
			return 0;//Break loop, function returns a string successfully
		}
		else{
		String[i]=ch;//store character in string
		}
	}
	//String is longer than the buffer, some of the string is lost
	String[buffer]=0x00;//Null terminate the partial string
	return 1;//Buffer ran out before carriage return, string is not null terminated
}