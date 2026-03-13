/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Oliver Rae-Moore
 * ID:201956453
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void){
	long decimal=0;
	char hex[9];
	int integer[9];
	bool error = false;
	printf("Enter a hexadecimal:");
	scanf("%s",hex);
	int length = strlen(hex);
	if(length>8){
		error=true;
	}
	
	
	if(error==false){
	for(int i = 0;i<length;i++){
		bool character = false;
		if(hex[i]>64&&hex[i]<71){ //comparing ascii value to determine if hex[i] is A-F
			character = true;
			integer[i] = hex[i]-55;
		}
		if(hex[i]>96&&hex[i]<103){ //lowercase a-f ascii comparison
			character = true;
			integer[i] = hex[i]-87;
		}
		if(character==false){
			if(hex[i]<48||hex[i]>57){ //compare ascii values of 0-9
				error = true;
			}
			else{
				integer[i] = hex[i]-48;
			}
		
	}
	decimal = decimal*16 + integer[i];
	}	
	

	
	
	}
	if(error==true){printf("Error: Invalid Hexadecimal\n");}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	if(error == false){
	printf("decimal:%ld\n", decimal);
	}
	return 0;
}