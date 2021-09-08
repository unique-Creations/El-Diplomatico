#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "LinkedList.h"

struct Student *studLinkedList;
//FUNCTION PROTOTYPES

/*  processFile(): void
    Scans user's file that is then opened, read, printed,
    and copied to output.txt.
*/
void processFile(int *numOfStudents, int *txtSize);

/*
    processUserCommand(char *command): void
*/
void processUserCommand(char *command);


int main( )
{
    char userCommand[1];
    int txtsize = 0, numOfStudents = 0; 
    processFile(&numOfStudents,&txtsize);

    while (1)
    {
        printf("\n\nPlease enter a command (enter h for help): ");
        scanf("%s", userCommand);
        processUserCommand(userCommand);
    }
    return 0;

}

void processFile(int *numOfStudents, int *txtSize)
{   
    FILE *fp;
    FILE *outFp;
    char fileName[30]; 
    char dataRead[1000];
    // Text file path to be added to file name.s
    char path[60] = "Resources/"; 

    printf("Please enter input file name: ");
    scanf("%s", fileName);
    strcat(path,fileName);

    // File pointer set to read mode.
    fp = fopen(path,"r"); 

    // Open output file in write mode.                                     
    outFp = fopen("Resources/output.txt","w");

    if (fp == NULL)
    {
       printf("\nFile failed to open."); 
       exit(1);
    }
    else
    {   
        printf("%s", fileName);
        printf("\n\n");
        // get data from fp's text file and print.
        while(fgets(dataRead, 1000, fp) != NULL)
        {
            *txtSize++;
            printf("%s" , dataRead);

            // Store to output file.
            if (outFp == NULL)
            {
                printf("\nOutput file failed to open."); 
                exit(1);
            }
            else
            {
                fprintf(outFp,"%s", dataRead);
            }
            *numOfStudents++;
        }
        *numOfStudents--;
    }
    rewind(fp);

    // Char array to store text file data.
    char *cPtr;
    //cPtr = (char *)malloc(sizeof(char) * *txtSize);

    // Store file content into array.
    // Dump first line of file.
    fgets(dataRead, 1000, fp);
    fgets(dataRead, 1000, fp);
    
    //TODO: use pointer to store the char values somewhere.
    for (int i = 0; i < 10; i++)
    {
        cPtr = &dataRead[i];
        printf("\nptr %c", *cPtr);
        cPtr++;
    }
    
    fclose(fp);
    fclose(outFp);
    //free(cPtr);
    //cPtr = NULL;
}

void processUserCommand(char *command)
{
      if (*command == 'h')
    {
        printf("\na/1 to obtain all the students that got diploma");
        printf("\nb/2 to arrange subject A in ascending order");
        printf("\nc/3 to calculate the average and standard deviation");
        printf("\nd/4 to save all the above results in an output file");
        printf("\ne to exit");
    }else if (*command == 'e')
    {
        exit(0);
    }

    switch (*command)
    {
    case '1':
        dumpGradList(studLinkedList);
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    default:
        break;
    }
    
}