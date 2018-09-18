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
    char backSlash = '\\';
    char newlineChar = '\n';
    char horizontalTab = '\t';
    char verticalTab = '\v';
    char backspace = '\b';
    char carrReturn = '\r';
    char formFeed = '\f';
    char singleQuo = '\'';
    char doubleQuo = '\"';
    char nullConstant = '\0';

    fp = fopen("csis.txt", "w");
    
    printf("%-3s %18s %10s \n", "Char Constant", "Description", "Value");
    fprintf(fp, "%-3s %18s %10s \n", "Char Constant", "Description", "Value");
    printf("\\%-3s %25s %10d \n", "n", "newline", newlineChar);
    fprintf(fp, "\\%-3s %25s %10d \n", "n", "newline", newlineChar);
    printf("\\%-3s %25s %10d \n", "t", "horizontal tab", horizontalTab);
    fprintf(fp, "\\%-3s %25s %10d \n", "t", "horizontal tab", horizontalTab);
    printf("\\%-3s %25s %10d \n", "v", "vertical tab", verticalTab);
    fprintf(fp, "\\%-3s %25s %10d \n", "v", "vertical tab", verticalTab);
    printf("\\%-3s %25s %10d \n", "b", "backspace", backspace);
    fprintf(fp, "\\%-3s %25s %10d \n", "b", "backspace", backspace);
    printf("\\%-3s %25s %10d \n", "r", "carriage return", carrReturn);
    fprintf(fp, "\\%-3s %25s %10d \n", "r", "carriage return", carrReturn);
    printf("\\%-3s %25s %10d \n", "f", "form feed", formFeed);
    fprintf(fp, "\\%-3s %25s %10d \n", "f", "form feed", formFeed);
    printf("\\%-3s %25s %10d \n", "\\", "backslash", backSlash);
    fprintf(fp, "\\%-3s %25s %10d \n", "\\", "backslash", backSlash);
    printf("\\%-3s %25s %10d \n", "'", "single quote", singleQuo);
    fprintf(fp, "\\%-3s %25s %10d \n", "'", "single quote", singleQuo);
    printf("\\%-3s %25s %10d \n", "\"", "double quote", doubleQuo);
    fprintf(fp, "\\%-3s %25s %10d \n", "\"", "double quote", doubleQuo);
    printf("\\%-3s %25s %10d \n", "0", "null", nullConstant);
    fprintf(fp, "\\%-3s %25s %10d \n", "0", "null", nullConstant);
    
    fclose(fp);
    return 0;
}
