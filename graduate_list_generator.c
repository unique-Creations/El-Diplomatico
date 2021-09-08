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
void processFile(int *numOfStudents);

/*
    processUserCommand(char *command): void
*/
void processUserCommand(char *command);


int main() {
    char userCommand[1];
    int numOfStudents = 0;
    processFile(&numOfStudents);

    while (1) {
        printf("\n\nPlease enter a command (enter h for help): ");
        scanf("%s", userCommand);
        processUserCommand(userCommand);
    }

}

void processFile(int *numOfStudents) {
    FILE *fp;
    FILE *outFp;
    char fileName[32];
    char dataRead[1000];
    // Text file path to be added to file name.s
    char path[60] = "Resources/";

    printf("Please enter input file name: ");
    scanf("%s", fileName);
    strcat(path, fileName);

    // File pointer set to read mode.
    fp = fopen(path, "r");

    // Open output file in write mode.                                     
    outFp = fopen("Resources/output.txt", "w");

    if (fp == NULL) {
        printf("\nFile failed to open.");
        exit(1);
    } else {
        printf("%s", fileName);
        printf("\n\n");
        // get data from fp's text file and print.
        while (fgets(dataRead, 100, fp) != NULL) {

            printf("%s", dataRead);

            // Store to output file.
            if (outFp == NULL) {
                printf("\nOutput file failed to open.");
                exit(1);
            } else {
                fprintf(outFp, "%s", dataRead);
            }

            // Iterate over characters of current line from file.
            if (*numOfStudents > 0){
                // Allocate new student struct for each student.
                studLinkedList= allocate();
                char *cPtr;
                cPtr = dataRead;
                int i = 0;
                //TODO: Now that chars are accessible without spaces, store into struct.
                while (*(cPtr + i) != '\n' ){
                    if(*(cPtr + i) != ' ' && *(cPtr + i) != '\0') {
                        printf("%c", *(cPtr + i));
                    }
                    ++i;
                }
                for (int i = 0; i < strlen(dataRead); ++i) {

                }
            }
            *numOfStudents = *numOfStudents + 1;
        }

    }
    *numOfStudents--;
    rewind(fp);


    // Store file content into array.
    // Dump first line of file.
    fgets(dataRead, 100, fp);
    fgets(dataRead, 100, fp);

    fclose(fp);
    fclose(outFp);
}

void processUserCommand(char *command) {
    if (*command == 'h') {
        printf("\na/1 to obtain all the students that got diploma");
        printf("\nb/2 to arrange subject A in ascending order");
        printf("\nc/3 to calculate the average and standard deviation");
        printf("\nd/4 to save all the above results in an output file");
        printf("\ne to exit");
    } else if (*command == 'e') {
        exit(0);
    }

    switch (*command) {
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