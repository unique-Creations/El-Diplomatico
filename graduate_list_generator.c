#include <stdio.h>
#include <string.h>
const int PASSING_GRADE = 50;

int main( )
{
    process_file();
    
    return 0;

}

process_file()
{   
    FILE *fp;
    char fileName[50]; 
    
    printf("Please enter input file name: ");
    scanf("%s", fileName);
    fp = fopen("Resources/","r");
    if (fp == NULL)
    {
       printf("File failed to open."); 
    }
}