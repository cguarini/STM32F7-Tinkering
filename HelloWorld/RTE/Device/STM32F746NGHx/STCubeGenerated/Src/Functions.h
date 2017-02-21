/*
A file of useful functions to be used when programming, especially
useful for interacting with the terminal.
Author: Chris Guarini
*/

//DEFINES
#define MAX_LENGTH (250)//Max length of a string

//FUNCTION PROTOTYPES


/*
Gets a string from the terminal and stores it in the param String[].
Will loop until it hits a carriage return, or until the buffer runs out
@param: String[] - Where to store the string from the terminal
				buffer - 	 Max length of the string
*/
int getString(char String[],int buffer);


/*
Prints String to the terminal using putchar. Will loop until it
hits null or the buffer runs out.
@param String[] - The string to print
			 buffer   - The max amount of characters it will print
*/
int putString(char String[], int buffer);

/*
Prints a newline and carriage return character
*/
void nextLine(void);

