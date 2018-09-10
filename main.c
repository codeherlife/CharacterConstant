//
//  char.c
//  CharacterConstant
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Character Constant Lab;
//  Date: 9/7/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>

FILE *fp;

int main(void) {
    //after variable declarations include the stmt fp = fopen("csis.txt", "w");
    fp = fopen("csis.txt", "w");
    
    printf("Char Constant\tDescription\t\t\tValue\n");
    //don't forget to have fprintf(fp, ); for every print statement
    
    fclose(fp);
    return 0;
}
