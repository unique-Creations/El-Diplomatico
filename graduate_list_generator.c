#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//MACROS
#define PASSING_GRADE 50;

//GLOBAL VARIABLES;
int NUM_OF_STUDENTS;
char TXT_TO_ARR[10][10];

//FUNCTION PROTOTYPES

/*  processFile(): void
    Scans user's file that is then opened, read, printed,
    and copied to output.txt.
    

*/
void processFile();

/*
    processUserCommand(char *command): int
*/
int processUserCommand(char *command);

/*

*/
getPassingStudents();

struct student
{
    char name;
    int number;
    float subA;
    float subB;
};

int main( )
{
    char userCommand[1];
    processFile();

    while (1)
    {
        printf("\n\nPlease enter a command (enter h for help): ");
        scanf("%s", userCommand);
        processUserCommand(&userCommand);
    }
    return 0;

};

void processFile()
{   
    FILE *fp;
    FILE *outFp;
    char fileName[30]; 
    char dataRead[1000];

    // Text file path to be added to file name.
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
        while(fgets(dataRead, sizeof(dataRead), fp) != NULL)
        {
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
            NUM_OF_STUDENTS++;
            //printf("\nCharacter array: %s", &outputArray);
        }
        NUM_OF_STUDENTS--;
    }
    // Char array to store text file data.
    char outputArray[NUM_OF_STUDENTS][sizeof(*fp)]; 
    int i = 0;
    
    // Store read file into outputArray. 
    while(fgets(outputArray[i], sizeof(*fp), fp))
    {
        outputArray[i][strlen(outputArray[i]) - 1] = '\0';
        i++;
    }
    fclose(fp);
    fclose(outFp);
}

int processUserCommand(char *command)
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
        getPassingStudents();
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
getPassingStudents()
{
    
}