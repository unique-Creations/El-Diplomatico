#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "LinkedList.h"

studentStruct student[50];

//Global variables
float MEAN_A, MEAN_B, SD_A, SD_B;
int NUM_OF_STUDENTS = 0;
//FUNCTION PROTOTYPES

/*  processFile(): void
 *  Scans user's file that is then opened, read, printed,
 *  and copied to output.txt.
*/
void processFile(void);

/*
 *  processUserCommand(char *command): void
 *  Takes user's command chosen.
 *  Executes action or function depending on command entered
 *  from the options available.
*/
void processUserCommand(const char *command);

/*
 *  readFile(char s[]): FILE*
 *  Takes string of path where file is located.
 *  Opens file in read mode.
 *  returns address of first line in file.
 */
FILE *readFile(char s[]);

/*
 *  writeFile(char s[]): FILE*
 *  Takes string of path where file is located.
 *  Opens file in write mode.
 *  returns address of first line in file to write.
 */
FILE *writeFile(char s[]);
/*
 *
 */
void calculateSD(void);
/*
 *
 */
void calculateMean(float numA, float numB);

int main() {
    char userCommand[1];
    processFile();
    while (1) {
        printf("\n\nPlease enter a command (enter h for help): ");
        scanf("%s", userCommand);
        processUserCommand(userCommand);
    }

}

void processFile(void) {
    FILE *fp;
    FILE *outFp;
    char fileName[32];
    char dataRead[1000];
    float sumA, sumB;
    // Text file path to be added to file name.s
    char path[60] = "Resources/";

    printf("Please enter input file name: ");
    scanf("%s", fileName);
    strcat(path, fileName);

    // File pointer set to read mode.
    fp = readFile(path);
    // Open output file in write mode.                                     
    outFp = writeFile("Resources/output.txt");

    printf("%s", fileName);
    printf("\n\n");

    // get data from file pointer's text file and print.
    while (fgets(dataRead, 100, fp) != NULL) {
        printf("%s", dataRead);

        // Iterate over characters of current line from file.
        if (NUM_OF_STUDENTS > 0) {

            char *cPtr;
            cPtr = dataRead;
            int i = 0;

            while (*(cPtr + i) != '\0') {
                if (*(cPtr + i) != ' ' || *(cPtr + i - 1) != ' ') {
                    // Store to output file.
                    fprintf(outFp, "%c", *(cPtr + i));
                }
                ++i;

            }
        }
        NUM_OF_STUDENTS = NUM_OF_STUDENTS + 1;
    }
    NUM_OF_STUDENTS = NUM_OF_STUDENTS - 1;
    fclose(fp);
    fclose(outFp);
    fp = NULL;

    // Open output.txt in reading mode
    fp = readFile("Resources/output.txt");
    int i = 0;
    studentStruct *ptr;
    // Iterate output.txt
    // Store into struct and add to linked list.d
    while (!feof(fp)) {
        ptr = &student[i];

        fscanf(fp, "%s %d %f %f",
               ptr->name,
               &ptr->studentNum,
               &ptr->subA,
               &ptr->subB);
        appendStudent(ptr);
        sumA = sumA + ptr->subA;
        sumB = sumB + ptr->subB;
        fgets(dataRead, 200, fp);
        i++;
    }
    fclose(fp);
    calculateMean(sumA, sumB);
    calculateSD();
}

void processUserCommand(const char *command) {
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
            dumpList(getHead(), 1);
            break;
        case '2':
            printf("Subject A in ascending order\n");
            dumpList(getAscHead(), 0);
            break;
        case '3':
            printf("Mean & Standard deviation results\n");
            printf("\t\t\tMEAN\tSTANDARD DEVIATION\n");
            printf("SUBJECT A:\t%.2f\t\t%.2f\n", MEAN_A,SD_A);
            printf("SUBJECT B: \t%.2f\t\t%.2f\n", MEAN_B, SD_B);
            break;
        case '4':
            printf("four");
            break;
        default:
            break;
    }

}

FILE *readFile(char s[]) {
    FILE *p;
    p = fopen(s, "r");
    if (p == NULL) {
        printf("\nFile failed to open.");
        exit(1);
    }
    return (p);
}

FILE *writeFile(char s[]) {
    FILE *p;
    p = fopen(s, "w");
    if (p == NULL) {
        printf("\nFile failed to open.");
        exit(1);
    }
    return (p);
}

void calculateSD(void){
    float sumA, sumB, toRootA, toRootB;
    float square = 2;
    studentStruct *ptr;
    ptr = student;
    //Get the summation of the numerator for both A and B
    for (int i = 0; i < NUM_OF_STUDENTS; i++) {
        sumA = sumA + powf((ptr + i)->subA - MEAN_A, square);
        sumB = sumB + powf((ptr + i)->subB - MEAN_B, square);
    }
    // square the summations divided by the population size.
    // store into global standard deviation values.
    SD_A = sqrtf(sumA / (float)NUM_OF_STUDENTS);
    SD_B = sqrtf(sumB / (float)NUM_OF_STUDENTS);
}

void calculateMean(float numA, float numB){
     MEAN_A = (numA / (float)NUM_OF_STUDENTS);
     MEAN_B = (numB / (float)NUM_OF_STUDENTS);
}